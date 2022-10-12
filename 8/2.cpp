#include <iostream>

template <typename T1, typename T2>
struct Pair {
    T1 first;
    T2 second;

    Pair(T1 first, T2 second) : first(first), second(second) {}

    Pair operator+(const Pair& rhs) {
        return Pair(first + rhs.first, second + rhs.second);
    }

    bool operator>(const Pair& rhs) {
        return first + second > rhs.first + rhs.second;
    }
};

int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);

    std::cout << "p1: " << p1.first << ", " << p1.second << std::endl;
    std::cout << "p2: " << p2.first << ", " << p2.second << std::endl;

    if (p1 > p2) {
        std::cout << "p1 is greater than p2" << std::endl;
    } else {
        std::cout << "p2 is greater or equal to p1" << std::endl;
    }

    auto sum = p1 + p2;
    std::cout << "sum: " << sum.first << ", " << sum.second << std::endl;
}
