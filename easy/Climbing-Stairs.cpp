//-----------------------------------------------------------------------------
//
// Source code for 'Climbing Stairs' task
// URL: https://leetcode.com/problems/climbing-stairs/
//
//-----------------------------------------------------------------------------

#include <iostream>

class Solution {
  public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int current = 1, prev = 1, temp;

        for (int i = 2; i <= n; ++i) {
            temp = current;
            current += prev;
            prev = temp;
        }

        return current;
    }
};

int main() {
    Solution s;

    std::cout << s.climbStairs(2) << '\n';
    std::cout << s.climbStairs(3) << '\n';
    std::cout << s.climbStairs(4) << '\n';
    std::cout << s.climbStairs(40) << '\n';
}
