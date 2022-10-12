#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <functional>
#include "fraction.hpp"

int main() {
	std::cout << 5 - 3 - Fraction(2, 1) - 2 - Fraction(1, 1) << std::endl;
}
