#pragma once

template <typename T>
auto findDivisableByFour(const T& container) -> typename T::const_iterator
{
	for(auto it = container.begin(); it != container.end(); ++it)
	{
		if (0 == *it % 4) return it;
	}
	return container.end();
}