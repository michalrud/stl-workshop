#pragma once

#include <gtest/gtest.h>
#include <array>
#include <vector>
#include <list>

template <typename T>
struct ContainerTypedTests : public ::testing::Test {
 public:
  using ContainerType = T;
};

typedef ::testing::Types<
	std::array<int, 4>,
	std::list<int>,
	std::vector<int> > ContainerTypes;
TYPED_TEST_CASE(ContainerTypedTests, ContainerTypes);

