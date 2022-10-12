#pragma once

#include <vector>
#include <sstream>

class Set {
	std::vector<int> nums;

    Set(size_t capacity);

public:
	Set();
    Set(const Set& set);
    
    Set operator+(const Set& other) const;
    Set &operator+=(int num);

    friend std::ostream& operator<<(std::ostream &lhs, const Set& set);
};
