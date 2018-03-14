#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "08-remove_duplicates.hpp"

TYPED_TEST(ContainerTypedTests, RemoveDuplicatesWithDuplicatedValues) {
	typename TestFixture::ContainerType input{2, 1, 1, 2};
	const typename TestFixture::ContainerType expected{1, 2};
	const auto result = myRemoveDuplicates(input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, RemoveDuplicatesNoDuplicatedValues) {
	typename TestFixture::ContainerType input{2, 1, 4, 9};
	const typename TestFixture::ContainerType expected{1, 2, 4, 9};
	const auto result = myRemoveDuplicates(input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, RemoveDuplicatesAllDuplicatedValues) {
	typename TestFixture::ContainerType input{1, 1, 1, 1};
	const typename TestFixture::ContainerType expected{1};
	const auto result = myRemoveDuplicates(input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}
