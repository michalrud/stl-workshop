#pragma once
#include <cassert>

template <typename T>
void moveOddToBeginning(T& container)
{
	auto it = container.begin();
	for (int i = 0; i < container.size() - 1; ++i, ++it)
	{
		if (*it % 2 != 1)  // not odd
		{
			// find first odd to swap with
			for (auto it2 = it; it2 != container.end(); ++it2)
			{
				if (*it2 % 2 == 1) std::swap(*it, *it2);
			}
		}
	}
}
