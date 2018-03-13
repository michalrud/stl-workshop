#pragma once

#include <limits>

template <typename T>
auto myminmax(const T& container) -> std::pair<typename T::value_type, typename T::value_type>
{
	using ValueType = typename T::value_type;
	ValueType min = std::numeric_limits<ValueType>::max();
	ValueType max = std::numeric_limits<ValueType>::min();
	for (const auto& element : container)
	{
		if (element < min) min = element;
		if (element > max) max = element;
	}
	return {min, max};
}