#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "05-partial.hpp"

TYPED_TEST(ContainerTypedTests, Multiply) {
	typename TestFixture::ContainerType input{1, 2, 3, 4};
	const typename TestFixture::ContainerType actual = myPartial(input);
	const typename TestFixture::ContainerType expected{1, 2, 6, 24};

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}
