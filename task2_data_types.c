/*
 * Task 2: Choose the Data Types
 *
 * Data type choices:
 *   Meter reading        : unsigned short (2 bytes, 0..65535)
 *   Household ID         : unsigned int   (4 bytes, covers 800,000 houses)
 *   Individual bill     : long           (paise, exact integer arithmetic)
 *   District total      : long long      (paise, no overflow at 800,000 houses)
 *
 * The meter is a 16-bit register, so unsigned arithmetic (modulo 2^16)
 * handles rollover without any if-else.
 */

#include <stdio.h>
#include <limits.h>

/* The meter register is a 16-bit counter: after 65535 it rolls over to 0. */
typedef unsigned short meter_t;

unsigned int consumption(meter_t previous, meter_t current) {
    /* Unsigned 16-bit arithmetic naturally handles register roll-over.
       e.g. 120 - 65400 = -65280  ->  -65280 + 65536 = 256 */
    return (meter_t)(current - previous);
}

int main(void) {
    printf("sizeof(meter_t) = %zu bytes, maximum reading = %u\n",
           sizeof(meter_t), (unsigned)USHRT_MAX);
    printf("Consumption: %u units\n", consumption(1200, 1530));
    printf("Consumption: %u units\n", consumption(65400, 120));   /* rolled over */
    return 0;
}
