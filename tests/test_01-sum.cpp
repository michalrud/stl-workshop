#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"

TYPED_TEST(ContainerTypedTests, DoesBlah) {
	typename TestFixture::ContainerType actual{0, 1, 2, 3};
	typename TestFixture::ContainerType expected{0, 1, 2, 3};
	EXPECT_EQ(expected.size(), actual.size());
	EXPECT_TRUE(std::equal(expected.begin(), expected.end(), actual.begin()));
}

