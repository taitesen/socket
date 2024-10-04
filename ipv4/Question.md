## Write a C functions as below

> [!QUESTION]
> 1. void get_broadcast_address(char *ip_addr, char mask, char *output_buffer);
> [!EXAMPLE]
>```c
>char broadcast_addr_buffer[PREFIX_LEN]; // PREFIX_LEN is 16(constant)
>memset(broadcast_addr_buffer, 0, PREFIX_LEN);
>char *ip_addr = "192.168.2.10";
>char mask = 20;
>get_broadcast_address(ip_addr, mask, broadcast_addr_buffer);
>printf("Broadcast Address: %s\n", broadcast_addr_buffer);
>```
---
> [!QUESTION]
> 2. unsigned int get_ip_integral_equivalent(char *ip_addr);
> [!EXAMPLE]
>```c
>char *ip_addr = "192.168.2.10";
>unsigned int int_ip = get_ip_integral_equivalent(ip_addr);
>printf("Integer equivalent of %s is %d\n", ip_addr, int_ip);
>```
---
> [!QUESTION]
> 3. void get_abcd_ip_format(unsigned int ip_addr, char *output_buffer);
> [!EXAMPLE]
>```c
>unsigned int int_ip = "1058138165"; // 122.172.178.53
>char buffer[PREFIX_LEN];
>memset(buffer, 0, PREFIX_LEN);
>get_abcd_ip_format(int_ip, buffer);
>printf("IP in A.B.C.D format = %s\n", buffer);
>```
---
> [!QUESTION]
> 4. void get_network_id(char *ip_addr, char mask, char *output_buffer);
> [!EXAMPLE]
>```c
>char buffer[PREFIX_LEN];
>memset(buffer, 0, PREFIX_LEN);
>char *ip_addr = "192.168.2.10";
>char mask = 20;
>get_network_id(ip_addr, mask, buffer);
>printf("Network ID: %s\n", buffer);
>```
---
> [!QUESTION]
> 5. unsigned int get_subnet_cardinality(char mask);
> [!EXAMPLE]
>```c
>unsigned char mask = 24;
>printf("Subnet cardinality for Mask %u is %u\n", mask, get_subnet_cardinality(mask));
>```
---
> [!QUESTION]
> 6. int check_ip_subnet_membership(char *network_id, char mask, char *ip_addr);
> [!EXAMPLE]
>```c
>char *ip_addr = "192.168.2.10";
>char *network_id = "192.168.0.0";
>char mask = 24;
>int result = check_ip_subnet_membership(network_id, mask, ip_addr);
>if(result == 0)
>   printf("IP Address: %s is a member of subnet %s/%u\n", ip_addr, network_id, mask);
>else
>   printf("IP Address: %s is not a member of subnet %s/%u\n", ip_addr, network_id, mask);
>```


