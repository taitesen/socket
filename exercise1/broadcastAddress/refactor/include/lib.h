#ifndef _BROADCAST_H
#define _BROADCAST_H

#define PREFIX_LENGTH 16
#define FLAG 0xFF

void get_broadcast_address(char *ipAddress, char *mask, char *outputBuffer);

#endif // _BROADCAST_H
