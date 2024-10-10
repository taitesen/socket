#include "../include/lib.h"
#include <stdio.h>

int check_ip_subnet_membership(char *ip_addr, int mask, char *network_id) {
    int octet1, octet2, octet3, octet4;
    if (sscanf(ip_addr, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4) != 4) {
        fprintf(stderr, "In valid IPv4 Address\n");
        return -1;
    }
    unsigned int IPAddressINT = octet1 << 24 | octet2 << 16 | octet3 << 8 | octet4;

    int network_id_octet1, network_id_octet2, network_id_octet3, network_id_octet4;
    if (sscanf(network_id, "%d.%d.%d.%d", &network_id_octet1, &network_id_octet2, &network_id_octet3, &network_id_octet4) != 4) {
        fprintf(stderr, "In valid NetworkID Address\n");
        return -1;
    }
    unsigned int NetworkIDINT = network_id_octet1 << 24 | network_id_octet2 << 16 | network_id_octet3 << 8 | network_id_octet4;

    unsigned int subnetMask= (0xFFFFFFFF << (32 - mask));
    unsigned int calculatedNetworkID = subnetMask & IPAddressINT;
    return calculatedNetworkID == NetworkIDINT;
}
