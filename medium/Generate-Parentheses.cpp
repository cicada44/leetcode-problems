//-----------------------------------------------------------------------------
//
// Source code for 'Generate Parentheses' task
// URL: https://leetcode.com/problems/generate-parentheses/
//
//-----------------------------------------------------------------------------

#include <string>
#include <vector>

#include <iostream>

class Solution {
  public:
    void generateCombs(int openBrackets, int closeBrackets,
                       std::vector<std::string> &combs, std::string s) {
        if (openBrackets == 0 && closeBrackets == 0) {
            combs.push_back(s);
            return;
        }

        if (openBrackets == closeBrackets) {
            generateCombs(openBrackets - 1, closeBrackets, combs, s + '(');
        } else if (openBrackets < closeBrackets && openBrackets != 0) {
            generateCombs(openBrackets, closeBrackets - 1, combs, s + ')');
            generateCombs(openBrackets - 1, closeBrackets, combs, s + '(');
        } else if (openBrackets == 0 && closeBrackets > 0) {
            generateCombs(openBrackets, closeBrackets - 1, combs, s + ')');
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> combinations;
        std::string s;

        generateCombs(n, n, combinations, s);

        return combinations;
    }
};

int main() {}
