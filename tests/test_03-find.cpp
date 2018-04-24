#include "gtest/gtest.h"
#include "fixture.hpp"
#include "03-find.hpp"

TYPED_TEST(ContainerTypedTests, FindDivisableBy4_Found) {
	typename TestFixture::ContainerType actual{3, 8, 6, 15};
	EXPECT_EQ(*findDivisableByFour(actual), 8);
}

TYPED_TEST(ContainerTypedTests, FindDivisableBy4_NotFound) {
	typename TestFixture::ContainerType actual{3, 7, 6, 15};
	EXPECT_TRUE(findDivisableByFour(actual) == actual.end());
}
