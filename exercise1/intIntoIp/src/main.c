#include "../include/lib.h"
#include <string.h>
#include <stdio.h>

int main() {
    unsigned int int_ip = 1058138165;
    char buffer[PREFIX_LEN];
    memset(buffer, 0, PREFIX_LEN);
    get_ipv4(int_ip, buffer);
    printf("IP in A.B.C.D format = %s\n", buffer);
}
