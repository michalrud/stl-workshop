#pragma once
#include <cassert>

template <typename T>
void myPartialSort(T& container, std::size_t n)
{
	assert(n <= container.size());
	if (n == 0) return;
	do
	{
		auto it = container.begin();
		for (std::size_t i = 0; i+1 < n; ++i)
		{
			auto it2 = it;
			++it2;
			if (it->thisIsImportant > it2->thisIsImportant)
			{
				std::swap(*it, *it2);
			}
			++it;
		}
		--n;
	} while(n > 1);
}
