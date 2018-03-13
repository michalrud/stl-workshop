#pragma once

template <typename T>
void myRotate(T& container, std::size_t n)
{
	if (0 == n) return;
	if (container.empty()) return;

	typename T::iterator current = container.begin();
	typename T::value_type currentValue;

	currentValue = *current;
	
	while (true) {
		current++;
		if (current == container.end()) break;
		auto buf = *current;
		*current = currentValue;
		currentValue = buf;
	};

	*container.begin() = currentValue;

	myRotate(container, --n);
}
