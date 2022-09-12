#include <iostream>

int find_sum(const int *table, int length);

int main(int, char**) {
    const int numsLen = 20;
    int nums[numsLen];
    for (size_t i = 0; i < numsLen; i++) {
        nums[i] = i + 1;
    }

    std::cout << "Sum av 10 første: " << find_sum(nums, 10) << std::endl;
    std::cout << "Sum av 5 neste: " << find_sum(nums + 10, 5) << std::endl;
    std::cout << "Sum av 5 siste: " << find_sum(nums + 15, 5) << std::endl;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += table[i];
    }
    return sum;
}
