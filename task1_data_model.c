/*
 * Task 1: Understand the Problem and Identify the Data
 * Electricity billing - Grama Jyothi Rural Electricity Co-operative
 *
 * Inputs     : household ID, consumer category, previous reading, current reading
 * Outputs    : net units consumed, energy charge, fixed charge, total payable
 * Constants  : slab limits (100, 200), slab rates (Rs 0 / 2.25 / 4.50), fixed charge Rs 50
 * Validation : readings in [0, 65535]; rollover when current < previous;
 *              totals never negative and exact to the paisa
 *
 * This program compares the space cost of storing a meter reading as a
 * binary integer versus as a text (ASCII) string.
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    unsigned short int_reading = 1530;   /* binary: always 2 bytes, O(1) compare */
    char str_reading[] = "01530";        /* text: d + 1 bytes, O(d) compare      */

    printf("Integer representation size: %zu bytes\n", sizeof(int_reading));
    printf("String representation size:  %zu bytes (d = %zu digits)\n",
           sizeof(str_reading), strlen(str_reading));

    return 0;
}
