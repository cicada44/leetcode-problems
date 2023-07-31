//-----------------------------------------------------------------------------
//
// Source code for 'Add Binary' task
// URL: https://leetcode.com/problems/add-binary/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <string>

#include <iostream>

class Solution {
  public:
    std::string addBinary(std::string a, std::string b) {
        std::string binResult;
        int i = a.length(), j = b.length(), carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            binResult += carry % 2 + '0';
            carry /= 2;
        }
        std::reverse(std::begin(binResult), std::end(binResult));

        return binResult;
    }
};

int main() {}
