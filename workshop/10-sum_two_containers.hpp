#pragma once
#include <cassert>
#include <stdexcept>

template <typename T>
void sumTwoContainers(T& first, const T& second)
{
	assert(first.size() == second.size());
	typename T::iterator it1 = first.begin();
	typename T::const_iterator it2 = second.begin();
	while (it1 != first.end() && it2 != second.end())
	{
		*it1 += *it2;
		++it1;
		++it2;
	}
}
