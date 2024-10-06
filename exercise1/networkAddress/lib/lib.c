#include "../include/lib.h"
#include <stdio.h>

void get_network_id(char *ip_addr, char mask, char *output_buffer) {
    int octet1, octet2, octet3, octet4;
    if(sscanf(ip_addr, "%d.%d.%d.%d", &octet1, &octet2, &octet3, &octet4) != 4) {
        fprintf(stderr, "Invalid IPv4 Address\n");
        return;
    }
    int k = 32 - (int)mask;
    if(k < 1 || k > 31) {
        fprintf(stderr, "Invalid Mask\n");
        return;
    }
    if(k <= 8) {
        octet4 = octet4 & (0 << k);
        sprintf(output_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
        return;
    }
    if(k <= 16) {
        k -= 8;
        octet4 = 0;
        octet3 = octet3 & (0 << k);
        sprintf(output_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
        return;
    }
    if(k <= 24) {
        k -= 16;
        octet4 = 0;
        octet3 = 0;
        octet2 = octet2 & (0 << k);
        sprintf(output_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
        return;
    }
    if(k <= 31) {
        k -= 24;
        octet4 = 0;
        octet3 = 0;
        octet2 = 0;
        octet1 = octet1 & (0 << k);
        sprintf(output_buffer, "%d.%d.%d.%d", octet1, octet2, octet3, octet4);
        return;
    }
}
