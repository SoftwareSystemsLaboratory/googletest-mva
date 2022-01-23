/*
 * countbits(n) tells how many bits are set in the (unsigned) integer n.
 */


#include <stdio.h>
#include <stdlib.h>

#include "countbits.h"

int count_bits(unsigned long n)
{
    int number_set=0;
    unsigned long number = n;
    while (number > 0) {
        number_set += (number & 0x1);
        number >>= 1;
    }
    return number_set;
}
