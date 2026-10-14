
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <limits.h>

int main(void)
{
    /* Sizes of standard data types */
    printf("=== Standard Data Type Sizes ===\n");

    printf("sizeof(char)       = %zu bytes\n", sizeof(char));
    printf("sizeof(short)      = %zu bytes\n", sizeof(short));
    printf("sizeof(int)        = %zu bytes\n", sizeof(int));
    printf("sizeof(long)       = %zu bytes\n", sizeof(long));
    printf("sizeof(long long)  = %zu bytes\n", sizeof(long long));
    printf("sizeof(float)      = %zu bytes\n", sizeof(float));
    printf("sizeof(double)     = %zu bytes\n", sizeof(double));
    printf("sizeof(void *)     = %zu bytes\n", sizeof(void *));

    /* Sizes of fixed-width integer types */
    printf("\n=== Fixed-Width Integer Sizes ===\n");

    printf("sizeof(uint8_t)    = %zu bytes\n", sizeof(uint8_t));
    printf("sizeof(int8_t)     = %zu bytes\n", sizeof(int8_t));
    printf("sizeof(uint16_t)   = %zu bytes\n", sizeof(uint16_t));
    printf("sizeof(int16_t)    = %zu bytes\n", sizeof(int16_t));
    printf("sizeof(uint32_t)   = %zu bytes\n", sizeof(uint32_t));
    printf("sizeof(int32_t)    = %zu bytes\n", sizeof(int32_t));
    printf("sizeof(uint64_t)   = %zu bytes\n", sizeof(uint64_t));

    /* Minimum and maximum values */
    printf("\n=== Fixed-Width Integer Limits ===\n");

    printf("uint8_t  : min = 0, max = %" PRIu8 "\n", UINT8_MAX);
    printf("int8_t   : min = %" PRId8 ", max = %" PRId8 "\n",
           INT8_MIN, INT8_MAX);

    printf("uint16_t : min = 0, max = %" PRIu16 "\n", UINT16_MAX);
    printf("int16_t  : min = %" PRId16 ", max = %" PRId16 "\n",
           INT16_MIN, INT16_MAX);

    printf("uint32_t : min = 0, max = %" PRIu32 "\n", UINT32_MAX);
    printf("int32_t  : min = %" PRId32 ", max = %" PRId32 "\n",
           INT32_MIN, INT32_MAX);

    printf("uint64_t : min = 0, max = %" PRIu64 "\n", UINT64_MAX);

    return 0;
}
