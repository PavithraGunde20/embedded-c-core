#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint8_t x = 250;
    x += 10;
    printf("x = %u, sizeof(int) = %zu\n", (unsigned)x, sizeof(int));
    return 0;
}
