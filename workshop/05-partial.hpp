#pragma once

template <typename T>
auto myPartial(T& container) -> T
{
	T retval(container);

	std::size_t i = 0;
	for (auto it = retval.begin(); it != retval.end(); ++it)
	{
		typename T::value_type newValue = 1;
		auto it2 = container.begin();
		for (std::size_t j = 0; j <= i; ++j)
		{
			newValue *= *it2;
			++it2;
		}
        *it = newValue;
		++i;
	}

	return retval;
}
