/* test cases */

#include <gtest/gtest.h>

#include "countbits.hh"

TEST(SquareRootTest, Simple) {

    ASSERT_EQ(4, count_bits(0xF));
    ASSERT_EQ(8, count_bits(0xFF));
    ASSERT_EQ(32, count_bits(0xFFFFFFFF));
}

TEST(SquareRootTest, Complex) {
    unsigned long values[] = { 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF };
    int bits[] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };

    int num_values = sizeof(values) / sizeof(unsigned long);
    for (int i=0; i < num_values; i++) {
        ASSERT_EQ(bits[i], count_bits(values[i]));
    }

    // use individual nibbles (hex digits) to generate a 32-bit value and see if bits add up
    unsigned long value = values[0] + (values[3] << 8) + (values[6] << 16) + (values[9] << 24);
    unsigned long value_bits = bits[0] + bits[3] + bits[6] + bits[9];
    ASSERT_EQ(value_bits, count_bits(value));


}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
