#include "gtest/gtest.h"
#include "fixture.hpp"
#include "02-minmax.hpp"

TYPED_TEST(ContainerTypedTests, Min1Max4) {
	typename TestFixture::ContainerType actual{1, 2, 3, 4};
	EXPECT_EQ(myminmax(actual).first, 1);
	EXPECT_EQ(myminmax(actual).second, 4);
}

TYPED_TEST(ContainerTypedTests, Min1Max1) {
	typename TestFixture::ContainerType actual{1, 1, 1, 1};
	EXPECT_EQ(myminmax(actual).first, 1);
	EXPECT_EQ(myminmax(actual).second, 1);
}

TYPED_TEST(ContainerTypedTests, MinMinus100MaxMinus90) {
	typename TestFixture::ContainerType actual{-100, -96, -93, -90};
	EXPECT_EQ(myminmax(actual).first, -100);
	EXPECT_EQ(myminmax(actual).second, -90);
}
