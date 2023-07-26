//-----------------------------------------------------------------------------
//
// Source code for 'Longest Palindromic Substring' task
// URL: https://leetcode.com/problems/longest-palindromic-substring/
//
//-----------------------------------------------------------------------------

#include <string>

#include <iostream>

class Solution {
  public:
    bool isPalindrome(const std::string &s, const int start,
                      const int end) const {
        if (s.size() == 1) return true;
        for (std::string::size_type left = start, right = end; left < right;
             ++left, --right) {
            if (s[left] != s[right]) return false;
        }
        return true;
    }

    std::string longestPalindrome(std::string s) {
        int n = s.size(), max = 0, start_idx = 0;

        for (int i = 0; i != n; ++i) {
            for (int j = i; j != n; ++j) {
                if (isPalindrome(s, i, j)) {
                    if (j - i + 1 > max) {
                        max = j - i + 1;
                        start_idx = i;
                    }
                }
            }
        }

        return s.substr(start_idx, max);
    }
};

int main() {}
