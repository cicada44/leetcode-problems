//-----------------------------------------------------------------------------
//
// Source code for 'Container With Most Water' task
// URL: https://leetcode.com/problems/container-with-most-water/
//
//-----------------------------------------------------------------------------

#include <vector>

class Solution {
  public:
    int maxArea(std::vector<int> &height) {
        int count = height.size() - 1;
        int amount = 0;
        int m = 0;

        auto left = height.begin(), right = height.end() - 1;

        while (left < right) {
            amount = count * ((*left < *right) ? *left : *right);

            if (m < amount) m = amount;

            if (*left < *right) {
                ++left;
                --count;
            } else if (*right < *left) {
                --right;
                --count;
            } else {
                ++left;
                --right;
                count -= 2;
            }
        }
        return m;
    }
};

int main() {}
