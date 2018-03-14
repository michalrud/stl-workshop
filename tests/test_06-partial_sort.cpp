#include <algorithm>
#include "gtest/gtest.h"
#include "fixture.hpp"
#include "06-partial_sort.hpp"

TYPED_TEST(ContainerTypedTestsForMyStruct, PartialSortFirstZero) {
	typename TestFixture::ContainerType actual{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	typename TestFixture::ContainerType expected{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	myPartialSort(actual, 0);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTestsForMyStruct, PartialSortFirstOne) {
	typename TestFixture::ContainerType actual{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	typename TestFixture::ContainerType expected{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	myPartialSort(actual, 1);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTestsForMyStruct, PartialSortFirstTwo) {
	typename TestFixture::ContainerType actual{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	typename TestFixture::ContainerType expected{
		MyStruct{2, 99}, 
		MyStruct{3, 50}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	myPartialSort(actual, 2);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTestsForMyStruct, PartialSortFirstThree) {
	typename TestFixture::ContainerType actual{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	typename TestFixture::ContainerType expected{
		MyStruct{1, 150}, 
		MyStruct{2, 99}, 
		MyStruct{3, 50}, 
		MyStruct{0, 2}};
	myPartialSort(actual, 3);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}

TYPED_TEST(ContainerTypedTestsForMyStruct, PartialSortFirstFour) {
	typename TestFixture::ContainerType actual{
		MyStruct{3, 50}, 
		MyStruct{2, 99}, 
		MyStruct{1, 150}, 
		MyStruct{0, 2}};
	typename TestFixture::ContainerType expected{
		MyStruct{0, 2},
		MyStruct{1, 150}, 
		MyStruct{2, 99}, 
		MyStruct{3, 50}}; 
	myPartialSort(actual, 4);

	EXPECT_TRUE(std::equal(actual.begin(), actual.end(), expected.begin()));
}
