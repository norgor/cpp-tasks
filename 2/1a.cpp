#include <iostream>
#include <string.h>


int main(int, char**) {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    std::cout << "i=" << i << ", &i=" << &i << std::endl;
    std::cout << "j=" << j << ", &j=" << &j << std::endl;
    std::cout << "p=" << p << ", *p=" << *p << std::endl;
    std::cout << "q=" << q << ", *q=" << *q << std::endl;
}
