#include <gtest/gtest.h>
#include <lib.hpp>

TEST(First, Test) {
	EXPECT_EQ(add(2, 2), 4);
}
