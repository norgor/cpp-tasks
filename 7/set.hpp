#pragma once

#include <vector>
#include <sstream>

class Set {
	std::vector<int> nums;

    Set(size_t capacity);

public:
	Set();
    Set(const Set& set);
    
    Set U(const Set& other) const;
    void add(int num);

    friend std::ostream& operator<<(std::ostream &lhs, const Set& set);
};
