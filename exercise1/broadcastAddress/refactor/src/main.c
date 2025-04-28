#include "../include/lib.h"
#include <stdio.h>
#include <string.h>

int main() {
    char output_buffer[PREFIX_LENGTH];
    memset(output_buffer, 0, PREFIX_LENGTH);
    char input[PREFIX_LENGTH];
    char masket[3];

    printf("Enter an Ip Address: ");
    scanf("%15s", input);

    printf("Enter a mask (0-32): ");
    scanf("%2s", masket);

    get_broadcast_address(input, masket, output_buffer);
    printf("\nIP ADDRESS: %s\nBROADCAST ADDRESS: %s\n", input, output_buffer);
    return 0;
}
