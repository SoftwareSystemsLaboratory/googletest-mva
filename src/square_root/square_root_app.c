/* standalone app not requiring tests to run */

#include <stdio.h>

#include "square_root.h"

int main(int argc, char* argv[]) {
    printf("sqrt(2) = %.5f\n", square_root(2.0));
}
