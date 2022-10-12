#include <iostream>
#include <cmath>
#include <iomanip>

#define equalCout(a, b) std::cout << "equal(" #a ", " #b ") = " << equal(a, b) << std::endl;

template<typename T>
bool equal(T a, T b) {
	std::cout << "equal<T>(T a = " << a <<", T b = " << b << ")" << std::endl;
	return a == b;
}

bool equal(double a, double b) {
	std::cout 
		<< "equal(double a = " << std::setprecision(7) << a << 
		", double b = " << std::setprecision(7) << b 
		<< ")" << std::endl;
	return std::fabs(a - b) < 0.00001;
}

int main() {
	bool intEqual = equal(1, 1);
	bool intInequal = equal(1, 2);
	bool doubleEqual = equal(1.0, 1.000009);
	bool doubleInequal = equal(1.0, 1.00001);

	std::cout << "equal(1, 1) = " << intEqual << std::endl;
	std::cout << "equal(1, 2) = " << intInequal << std::endl;
	std::cout << "equal(1.0, 1.000009) = " << doubleEqual << std::endl;
	std::cout << "equal(1.0, 1.00001) = " << doubleInequal << std::endl;
}
