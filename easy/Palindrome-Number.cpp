//-----------------------------------------------------------------------------
//
// Source code for 'Palindrome Number' task
// URL: https://leetcode.com/problems/palindrome-number/
//
//-----------------------------------------------------------------------------

#include <string>

class Solution {
  public:
    bool isPalindrome(int x) {
        std::string num = std::to_string(x);
        long unsigned n = 0;
        auto beg = num.cbegin();
        auto end = num.crbegin();
        while (n != num.size() / 2) {
            if (*beg != *end) return 0;
            beg++;
            end++;
            n++;
        }
        return 1;
    }
};