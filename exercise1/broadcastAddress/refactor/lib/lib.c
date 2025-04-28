#include "../include/lib.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void get_broadcast_address(char *ipAddress, char *mask, char *outputBuffer) {
    int maskint = atoi(mask);

    // check if the mask is in valid range
    if (maskint > 32 || maskint < 0) {
        fprintf(stderr, "Invalid Mask ranges (0 - 32)");
        exit(1); // exit on invalid mask
    }

    unsigned int octet1, octet2, octet3, octet4;

    // Split the IP Address into its individual octet
    if(sscanf(ipAddress, "%u.%u.%u.%u", &octet1, &octet2, &octet3, &octet4) != 4) {
        fprintf(stderr, "Invalid IP Address\n");
        exit(2); // exit on invalid IP length
    }

    // Validate each octet
    if(octet1 > 255 || octet2 > 255 || octet3 > 255 || octet4 > 255) {
        fprintf(stderr, "Invalid IP Range\n");
        exit(3); // exit on out of IP range
    }

    // Combines all the octet into a single 32-bit integer (IP Address)
    unsigned int ipInt = (octet1 << 24) | (octet2 << 16) | (octet3 << 8) | (octet4);

    // calculate the broadcast address by setting the host-bits to 1
    ipInt = ipInt | (UINT32_MAX >> maskint);

    //Extract each octet of the broadcast address
    octet1 = (ipInt >> 24) & FLAG;
    octet2 = (ipInt >> 16) & FLAG;
    octet3 = (ipInt >> 8) & FLAG;
    octet4 = ipInt & FLAG;

    // format the broadcast address into an output buffer
    sprintf(outputBuffer, "%u.%u.%u.%u", octet1, octet2, octet3, octet4);
}
