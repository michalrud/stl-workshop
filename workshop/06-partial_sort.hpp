#pragma once
#include <cassert>

template <typename T>
void myPartialSort(T& container, int n)
{
	assert(n <= container.size());
	do
	{
		auto it = container.begin();
		for (int i = 0; i < n-1; ++i)
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
