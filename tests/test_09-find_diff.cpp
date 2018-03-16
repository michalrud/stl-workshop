#include "gtest/gtest.h"
#include "fixture.hpp"
#include "09-find_diff.hpp"

TYPED_TEST(ContainerTypedTests, FindFirstDifference_ThereIsDifference) {
	typename TestFixture::ContainerType input1{2, 1, 1, 2};
	typename TestFixture::ContainerType input2{2, 1, 1, 4};
	const std::pair<int, int> expected{2, 4};
	const auto actual = findFirstDifference(input1, input2);

	EXPECT_EQ(actual, expected);
}

TYPED_TEST(ContainerTypedTests, FindFirstDifference_BothContainersEqual) {
	typename TestFixture::ContainerType input1{2, 1, 1, 2};
	typename TestFixture::ContainerType input2{2, 1, 1, 2};

	ASSERT_THROW(findFirstDifference(input1, input2), std::range_error);
}
