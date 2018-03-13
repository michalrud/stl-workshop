#include "gtest/gtest.h"
#include "fixture.hpp"
#include "01-sum.hpp"

TYPED_TEST(ContainerTypedTests, SumsToSix) {
	typename TestFixture::ContainerType actual{0, 1, 2, 3};
	EXPECT_EQ(mysum(actual), 6);
}

TYPED_TEST(ContainerTypedTests, SumsToZero) {
	typename TestFixture::ContainerType actual{0, -1, 1};
	EXPECT_EQ(mysum(actual), 0);
}

TYPED_TEST(ContainerTypedTests, ZeroElements) {
	typename TestFixture::ContainerType actual{};
	EXPECT_EQ(mysum(actual), 0);
}
