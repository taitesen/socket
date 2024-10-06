#include <stdio.h>

int get_host_cardinality(unsigned char mask);

int main() {

  unsigned char mask = 24;
  printf("Subnet cardinality for Mask %u is %u\n", mask, get_host_cardinality(mask));
  return 0;
}

int get_host_cardinality(unsigned char mask) {
    if((int)mask > 32) {
        fprintf(stderr, "Invalid mask\n");
        return -1;
    }
    int hostBit = 32 - (int)mask;
    return (1 << hostBit) - 2;
}
