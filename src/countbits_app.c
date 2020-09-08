/*
 * countbits(n) tells how many bits are set in the (unsigned) integer n.
 */


#include <stdio.h>
#include <stdlib.h>

#include "countbits.h"

int main(int argc, char *argv[]) {
    for (int i=1; i < argc; i++) {
        unsigned long value = atol(argv[i]);
        printf("%ld has %d bits set\n", value, count_bits(value));
    }
}
