#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "07-partition.hpp"

TYPED_TEST(ContainerTypedTests, PartitionMixed) {
	typename TestFixture::ContainerType actual{2, 1, 1, 2};
	const typename TestFixture::ContainerType expected{1, 1, 2, 2};
	moveOddToBeginning(actual);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, PartitionOneOddAtTheEnd) {
	typename TestFixture::ContainerType actual{2, 2, 2, 1};
	const typename TestFixture::ContainerType expected{1, 2, 2, 2};
	moveOddToBeginning(actual);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, PartitionNoOdds) {
	typename TestFixture::ContainerType actual{2, 2, 2, 2};
	const typename TestFixture::ContainerType expected{2, 2, 2, 2};
	moveOddToBeginning(actual);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, PartitionJustOdds) {
	typename TestFixture::ContainerType actual{1, 1, 1, 1};
	const typename TestFixture::ContainerType expected{1, 1, 1, 1};
	moveOddToBeginning(actual);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}
