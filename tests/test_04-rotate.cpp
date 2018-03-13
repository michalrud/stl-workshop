#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "04-rotate.hpp"

TYPED_TEST(ContainerTypedTests, RotateOnce) {
	typename TestFixture::ContainerType actual{1, 2, 3, 4};
	const typename TestFixture::ContainerType expected{4, 1, 2, 3};

	myRotate(actual, 1);
	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, RotateTwice) {
    typename TestFixture::ContainerType actual{1, 2, 3, 4};
    const typename TestFixture::ContainerType expected{3, 4, 1, 2};
    
    myRotate(actual, 2);
    EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, RotateThreeTimes) {
    typename TestFixture::ContainerType actual{1, 2, 3, 4};
    const typename TestFixture::ContainerType expected{2, 3, 4, 1};
    
    myRotate(actual, 3);
    EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTests, RotateFourTimes) {
    typename TestFixture::ContainerType actual{1, 2, 3, 4};
    const typename TestFixture::ContainerType expected{1, 2, 3, 4};
    
    myRotate(actual, 4);
    EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}
