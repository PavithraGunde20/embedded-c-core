
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t v = 0x12345678;

    /* View the 32-bit integer as individual bytes */
    uint8_t *p = (uint8_t *)&v;

    printf("Value of v: 0x%08X\n", (unsigned int)v);
    printf("Bytes in memory order:\n");

    printf("Byte 0: %02X\n", (unsigned int)p[0]);
    printf("Byte 1: %02X\n", (unsigned int)p[1]);
    printf("Byte 2: %02X\n", (unsigned int)p[2]);
    printf("Byte 3: %02X\n", (unsigned int)p[3]);

    /*
       Little-endian: least significant byte at lowest address.
    */

    return 0;
}
