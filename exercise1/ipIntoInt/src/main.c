#include "../include/lib.h"
#include <stdio.h>
int main() {
    char *ip_addr = "192.168.2.10";
    unsigned int int_ip = get_ip_integral_equivalent(ip_addr);
    printf("Integer equivalent of %s is %u\n", ip_addr, int_ip);
    return 0;
}
