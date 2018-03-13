#pragma once

template <typename T>
auto mysum(const T& container) -> typename T::value_type
{
	typename T::value_type retval = 0;
	for (const auto& item : container)
		retval += item;
	return retval;
}