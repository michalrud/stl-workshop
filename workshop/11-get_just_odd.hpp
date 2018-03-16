#pragma once

template <typename T>
auto getOddNumbers(const T& input)
	-> std::vector<typename T::value_type>
{
	std::vector<typename T::value_type> retval;
	for (const auto& value : input)
	{
		if (0 == value % 2) retval.push_back(value);
	}
	return retval;
}
