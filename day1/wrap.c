
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    /* 1. uint8_t wraparound after addition */
    uint8_t a = 200, b = 100;
    uint8_t c = a + b;

    /*
       a and b are promoted to int before addition.
       The result is 300, but assigning it to uint8_t
       keeps only the value modulo 256: 300 % 256 = 44.
    */
    printf("=== uint8_t Addition ===\n");
    printf("a = %u, b = %u\n", (unsigned)a, (unsigned)b);
    printf("uint8_t c = a + b = %u\n", (unsigned)c);

    /* 2. Print the addition result before uint8_t truncation */
    printf("\n=== Integer Promotion ===\n");
    printf("a + b = %u\n", (unsigned)(a + b));

    /* 3. Unsigned wraparound when counting down */
    uint8_t count = 2;

    printf("\n=== Unsigned Wraparound ===\n");
    printf("count = %u\n", (unsigned)count);

    count--;
    printf("After decrement: %u\n", (unsigned)count);

    count--;
    printf("After decrement: %u\n", (unsigned)count);

    count--;
    printf("After decrement: %u\n", (unsigned)count);

    /*
       uint8_t is unsigned and has range 0 to 255.
       Decrementing 0 wraps around to 255.
    */

    /* 4. Signed/unsigned comparison trap */
    printf("\n=== Signed/Unsigned Comparison ===\n");

    printf("(-1 < 1U) = %d\n", (-1 < 1U));

    /*
       Since 1U is unsigned, -1 is converted to unsigned
       for the comparison. It becomes UINT_MAX, which is
       greater than 1, so the comparison is false (0).
    */

    /* 5. Do not test signed overflow: it is undefined behavior. */

    return 0;
}
