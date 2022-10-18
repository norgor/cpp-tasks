#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T>
std::ostream& operator<<(std::ostream& s, std::vector<T> vec) {
	s << "{";
	for (auto i = vec.begin(); i != vec.end(); i++) {
		s << *i;
		if (i != vec.end() - 1) {
			s << ", ";
		}
	}
	s << "}";
	return s;
}

int main() {
	std::vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
	std::cout << "v1: " << v1 << std::endl;

	std::vector<int> v2 = {2, 3, 12, 14, 24};
	std::cout << "v2: " << v2 << std::endl;

	//a)
	auto elem15 = std::find_if(v1.begin(), v1.end(), [](int x){ return x > 15; });
	std::cout << "første element i v1 som er større enn 15: " << *elem15 << std::endl;

	//b)
	bool eq5 = std::equal(v1.begin(), v1.begin() + 5, v1.begin(),[](int a, int b) { return abs(b - a) <= 2; });
	std::cout << "(v1[0..5] == v2[0..5]) = " << eq5 << std::endl;

	bool eq4 = std::equal(v1.begin(), v1.begin() + 4, v1.begin(),[](int a, int b) { return abs(b - a) <= 2; });
	std::cout << "(v1[0..4] == v2[0..4]) = " << eq4 << std::endl;

	//c)
	std::vector<int> out;
	std::replace_copy_if(v1.begin(), v1.end(), std::back_inserter(out), [](int x){ return x % 2 == 1; }, 100);
	std::cout << "v1 med oddetall erstattet med 100 = " << out << std::endl;
}
