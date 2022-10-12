#include <iostream>
#include "set.hpp"

int main() {
	Set set1;
	Set set2;

	set1 += 1;
	set1 += 2;
	set2 += 2;
	set2 += 3;
	set2 += 4;

	Set set3 = set2;

	std::cout << "set1 = " << set1 << std::endl;
	std::cout << "set2 = " << set2 << std::endl;
	std::cout << "set3 = " << set3 << std::endl;
	std::cout << "set1 U set2 = " << set1 + set2 << std::endl;
}
