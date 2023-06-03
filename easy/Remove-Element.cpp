#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &v, int s) {
    for (int i = 0; i != s; ++i) {
        std::cout << v.at(i) << ' ';
    }
    std::cout << '\n';
}

class Solution {
  public:
    int removeElement(std::vector<int> &nums, int val) {
        if (nums.size() == 0) { return 0; }

        int n = 0, written = 0;

        for (auto i = nums.begin(); i != nums.end(); ++i) {
            while (val == *i) {
                if (nums.size() - n == 0) { return 0; }
                *i = nums.at(nums.size() - 1 - n);
                ++n;
            }
        }

        return (nums.size() - n + 1);
    }
};

void test1() {
    Solution s;
    std::vector<int> v{3, 2, 2, 3};

    int size = s.removeElement(v, 2);

    std::cout << size << '\n';
    print_vector(v, size);

    std::cout << '\n';
}

void test2() {
    Solution s;
    std::vector<int> v{3, 2, 2, 3};

    int size = s.removeElement(v, 3);

    std::cout << size << '\n';
    print_vector(v, size);

    std::cout << '\n';
}

void test3() {
    Solution s;
    std::vector<int> v{0, 1, 2, 2, 3, 0, 4, 2};

    int size = s.removeElement(v, 2);

    std::cout << size << '\n';
    print_vector(v, size);

    std::cout << '\n';
}

void test4() {
    Solution s;
    std::vector<int> v{1};

    int size = s.removeElement(v, 1);

    std::cout << size << '\n';
    print_vector(v, size);

    std::cout << '\n';
}

void test5() {}

void test() {
    test1();
    test2();
    test3();
    test4();
    test5();
}

int main() { test(); }
