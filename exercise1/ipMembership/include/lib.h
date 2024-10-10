#ifndef _IP_ADDRESS_H
#define _IP_ADDRESS_H

int check_ip_subnet_membership(char *, int, char *);
/*
First parameter is an IPv4 Address
Second Parameter is Mask Value
Third Parameter is Network ID

the function will return 1 if given IPv4 Address in within the given Network ID
and will return 0 otherwise.
*/

#endif // _IP_ADDRESS_H
