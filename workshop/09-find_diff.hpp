#pragma once
#include <cassert>
#include <stdexcept>

template <typename T>
auto findFirstDifference(const T& first, const T& second)
	-> std::pair<typename T::value_type, typename T::value_type>
{
	assert(first.size() == second.size());
	typename T::const_iterator it1 = first.begin();
	typename T::const_iterator it2 = second.begin();
	while (it1 != first.end() && it2 != second.end())
	{
		if (*it1 != *it2) return {*it1, *it2};
		++it1;
		++it2;
	}
	throw std::range_error("both containers are equal");
}
