#pragma once

template <typename T>
auto myRemoveDuplicates(const T& container) -> std::vector<typename T::value_type>
{
	std::set<typename T::value_type> s(container.begin(), container.end());
	return std::vector<typename T::value_type>(s.begin(), s.end());
}
