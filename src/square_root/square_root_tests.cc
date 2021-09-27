/* test cases */

#include <gtest/gtest.h>

#include "square_root.hh"

TEST(SquareRootTest, PositiveNos) {
    ASSERT_EQ(6, square_root(36.0));
    ASSERT_EQ(18.0, square_root(324.0));
    ASSERT_EQ(25.4, square_root(645.16));
    ASSERT_EQ(0, square_root(0.0));
}

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, square_root(-15.0));
    ASSERT_EQ(-1.0, square_root(-0.2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
