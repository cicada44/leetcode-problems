//-----------------------------------------------------------------------------
//
// Source code for 'Length of Last Word' task
// URL: https://leetcode.com/problems/length-of-last-word/
//
//-----------------------------------------------------------------------------

#include <cctype>
#include <string>

#include <iostream>

class Solution {
  public:
    int lengthOfLastWord(std::string s) {
        int len = 0, i = s.size() - 1;

        while (std::isspace(s[i--]));
        while (i >= 0 && !std::isspace(s[i--])) ++len;

        return ++len;
    }
};

int main() {}
