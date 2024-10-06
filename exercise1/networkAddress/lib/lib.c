#include "../include/lib.h"
#include <stdio.h>

void get_network_id(char *ip_addr, char mask, char *output_buffer) {
    int octet1, octet2, octet3, octet4;
    if(sscanf(ip_addr, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4) != 4) {
        fprintf(stderr, "Invalid IPv4 Address\n");
        return;
    }
    // Subnet mask in integer
    unsigned int SubnetMaskInt = (mask == 32) ? 0xFFFFFFFF : (0xFFFFFFFF << (32 - mask));
    unsigned int IpAddressInt = octet1 << 24 | octet2 << 16 | octet3 << 8 | octet4;
    unsigned int NetworkIdInt = SubnetMaskInt & IpAddressInt;

    octet1 = (NetworkIdInt >> 24) & 0xFF; // extract first octet from NetworkID
    octet2 = (NetworkIdInt >> 16) & 0xFF; // extract second octet from NetworkID
    octet3 = (NetworkIdInt >> 8) & 0xFF;  // extract third octet from NetworkID
    octet4 = NetworkIdInt & 0xFF;         // extract fourth octet from NetworkID

    sprintf(output_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
}
