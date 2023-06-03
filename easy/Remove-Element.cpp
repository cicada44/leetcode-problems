//-----------------------------------------------------------------------------
//
// Source code for 'Remove Element' task
// URL: https://leetcode.com/problems/remove-element/
//
//-----------------------------------------------------------------------------

#include <vector>

#include <iostream>

class Solution {
  public:
    int removeElement(std::vector<int> &nums, int val) {
        int n = 0;

        for (auto c = nums.begin(); c != nums.end(); ++c) {
            if (*c == val) {
                nums.erase(c);
                --c;
            }
        }

        return nums.size();
    }
};

int main() {}
