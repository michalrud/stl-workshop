#pragma once

#include <gtest/gtest.h>
#include <array>
#include <vector>
#include <list>
#include <deque>

struct MyStruct {
	int thisIsImportant;
	int thisNotSoMuch;

	bool operator ==(const MyStruct &b) const {
		return thisIsImportant == b.thisIsImportant &&
			thisNotSoMuch == b.thisNotSoMuch;
	}
};

template <typename T>
struct ContainerTypedTests : public ::testing::Test {
 public:
  using ContainerType = T;
};

typedef ::testing::Types<
	std::array<int, 4>,
	std::list<int>,
	std::vector<int>,
	std::deque<int>
	> ContainerTypes;
TYPED_TEST_CASE(ContainerTypedTests, ContainerTypes);

template <typename T>
struct ContainerTypedTestsForMyStruct : public ::testing::Test {
 public:
  using ContainerType = T;
};

typedef ::testing::Types<
	std::array<MyStruct, 4>,
	std::list<MyStruct>,
	std::vector<MyStruct>,
	std::deque<MyStruct>
	> ContainerTypesForMyStruct;
TYPED_TEST_CASE(ContainerTypedTestsForMyStruct, ContainerTypesForMyStruct);
