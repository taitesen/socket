#include "../include/lib.h"
#include <stdio.h>

unsigned int get_ip_integral_equivalent(char *ip_address) {
    unsigned int octet1, octet2, octet3, octet4;
    if (sscanf(ip_address, "%u.%u.%u.%u", &octet1, &octet2, &octet3, &octet4) != 4) {
        fprintf(stderr, "Invalid IPv4 Address\n");
        return 0;
    }
    if (octet1 > 255 || octet2 > 255 || octet3 > 255 || octet4 > 255) {
        fprintf(stderr, "Each octet of the IP Address must be between 1 - 255\n");
        return 0;
    }
    return ((octet1 << 24) | (octet2 << 16) | (octet3 << 8) | (octet4));
}
