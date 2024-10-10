#include "../include/lib.h"
#include <stdio.h>

int main() {
    char *ip_addr = "192.168.2.10";
    char *network_id = "192.168.2.0";
    int mask = 24;
    if (check_ip_subnet_membership(ip_addr, mask, network_id))
        printf("%s/%d is valid IPv4 address within the network of %s\n", ip_addr, mask, network_id);
    else
        printf("%s/%d is not an IPv4 address of network %s\n", ip_addr, mask, network_id);
    return 0;
}
