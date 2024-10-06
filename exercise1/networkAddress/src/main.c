#include "../include/lib.h"
#include <stdio.h>
#include <string.h>

int main() {
  char buffer[PREFIX_LEN];
  memset(buffer, 0, PREFIX_LEN);
  char *ip_addr = "192.168.2.10";
  char mask = 20;
  get_network_id(ip_addr, mask, buffer);
  printf("Network ID: %s\n", buffer);
  return 0;
}
