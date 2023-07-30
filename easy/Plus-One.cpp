//-----------------------------------------------------------------------------
//
// Source code for 'Plus One' task
// URL: https://leetcode.com/problems/plus-one/
//
//-----------------------------------------------------------------------------

#include <vector>

#include <iostream>

class Solution {
  public:
    std::vector<int> plusOne(std::vector<int> &digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};

int main() {}
