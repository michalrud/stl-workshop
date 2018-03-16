#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "11-get_just_odd.hpp"

TYPED_TEST(ContainerTypedTests, GetJustOddNumbers_ThereAreOddNumbers) {
	const typename TestFixture::ContainerType input{5, 6, 7, 8};
	const std::vector<int> expected{6, 8};
	const auto result = getOddNumbers(input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, GetJustOddNumbers_NoOddNumbersAtAll) {
	const typename TestFixture::ContainerType input{5, 7, 9, 11};
	const auto result = getOddNumbers(input);

	EXPECT_TRUE(result.empty());
}

TYPED_TEST(ContainerTypedTests, GetJustOddNumbers_JustOddNumbers) {
	const typename TestFixture::ContainerType input{4, 6, 8, 10};
	const std::vector<int> expected{4, 6, 8, 10};
	const auto result = getOddNumbers(input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}
