//-----------------------------------------------------------------------------
//
// Source code for 'Find the Index of the First Occurrece in a String' task
// URL:
// https://leetcode.com/problems/find-the-index-of-the-first-occurence-in-a-string/
//
//-----------------------------------------------------------------------------

#include <string>

#include <iostream>

class Solution {
  public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.size() > haystack.size()) return -1;
        size_t c = 0, buf;

        for (size_t i = 0; i < haystack.size(); ++i) {
            c = 0;
            buf = i;
            while (haystack.at(i) == needle.at(c)) {
                if (c == needle.size() - 1) return (i - needle.size() + 1);
                ++c;
                ++i;
                if (i > haystack.size() - 1) break;
            }
            i = buf;
        }

        return -1;
    }
};

int main() {}
