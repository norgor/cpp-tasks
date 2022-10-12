#include <algorithm>
#include "set.hpp"

Set::Set() {}

Set::Set(const Set& set) : nums(std::vector<int>(set.nums)) {}

Set Set::U(const Set& other) const {
    Set u = *this;
    u.nums.reserve((this->nums.size() + other.nums.size()));

    for (int num : other.nums) {
        u.add(num);
    }

    return u;
}

void Set::add(int num) {
    auto found = std::find(this->nums.begin(), this->nums.end(), num);

    if (found == this->nums.end()) {
        this->nums.emplace_back(num);
    }
}

std::ostream& operator<<(std::ostream &lhs, const Set& set) {
    lhs << "{";
    for (auto i = set.nums.begin(); i != set.nums.end(); i++) {
        lhs << *i;
        if (i != set.nums.end() - 1) {
            lhs << ", ";
        }
    }
    lhs << "}";
    return lhs;
}
