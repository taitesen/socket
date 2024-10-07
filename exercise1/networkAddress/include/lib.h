#ifndef _GET_NETWORK_ADDR
#define _GET_NETWORK_ADDR

#define PREFIX_LEN 16
void get_network_id(char *ip_addr, char mask, char *output_buffer);
/*
 *First argument: IPv4 ADDRESS
 *Second argument: Mask value
 *Third argument: an array of char
 *The function will find the network id of given IPv4 Address and stores it into
 *output buffer
 */
#endif //_GET_NETWORK_ADDR
