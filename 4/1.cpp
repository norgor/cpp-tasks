#include <vector>
#include <iostream>
#include <algorithm>


int main() {
	std::vector<double> numbers = {1,2,3,4,5};

	std::cout << "Første element: " << numbers.front() << std::endl;
	std::cout << "Siste element: " << numbers.back() << std::endl;

	numbers.emplace(numbers.begin()+1, 10);

	std::cout << "Første element: " << numbers.front() << std::endl;
	std::cout << "Andre element: " << numbers.at(1) << std::endl;

	auto iter = std::find(numbers.begin(), numbers.end(), 3);
	if (iter == numbers.end()) {
		std::cout << "Fant ikke tallet '3' i vektoren" << std::endl;
	} else {
		std::cout << "Fant tallet '3' i vektoren" << std::endl;;
	}
}
