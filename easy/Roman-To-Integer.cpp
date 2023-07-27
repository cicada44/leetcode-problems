//-----------------------------------------------------------------------------
//
// Source code for 'Roman to Integer' task
// URL: https://leetcode.com/problems/roman-to-integer/
//
//-----------------------------------------------------------------------------

#include <string>
#include <unordered_map>

#include <iostream>

class Solution {
  public:
    int romanToInt(std::string s) {

        std::unordered_map<char, int> romansNums{
            {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000},
        };

        int num = 0, currentHandler;
        for (std::string::size_type i = 0, end = s.length(); i != end; ++i) {
            currentHandler = romansNums[s[i]];
            (currentHandler < romansNums[s[i + 1]]) ? num -= romansNums[s[i]]
                                                    : num += romansNums[s[i]];
        }
    }
};

int main() {}
