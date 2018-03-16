#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "10-sum_two_containers.hpp"

TYPED_TEST(ContainerTypedTests, SumElementsFromTwoContainers) {
	typename TestFixture::ContainerType result{1, 2, 3, 4};
	const typename TestFixture::ContainerType input{5, 6, 7, 8};
	const typename TestFixture::ContainerType expected{6, 8, 10, 12};
	sumTwoContainers(result, input);

	EXPECT_TRUE(std::equal(result.begin(), result.end(), expected.begin()));
}
