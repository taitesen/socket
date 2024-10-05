#include "../include/lib.h"
#include <stdio.h>

void get_ipv4(unsigned int number, char *output_buffer) {
    unsigned int octet1, octet2, octet3, octet4;
    octet1 = (number >> 24) & FLAG;
    octet2 = (number >> 16) & FLAG;
    octet3 = (number >> 8) & FLAG;
    octet4 = number & FLAG;
    sprintf(output_buffer, "%u.%u.%u.%u", octet1, octet2, octet3, octet4);
}
