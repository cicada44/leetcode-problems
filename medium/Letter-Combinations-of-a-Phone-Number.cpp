//-----------------------------------------------------------------------------
//
// Source code for 'Letter Combinations of a Phone Number' task
// URL: https://leetcode.com/problems/container-with-most-water/
//
//-----------------------------------------------------------------------------

#include <map>
#include <string>
#include <vector>

class Solution {
  public:
    std::map<int, std::string> assoc = {{2, "abc"}, {3, "def"}, {4, "ghi"},
                                        {5, "jkl"}, {6, "mno"}, {7, "pqrs"},
                                        {8, "tuv"}, {9, "wxyz"}};

    void helper(std::vector<std::string> &answer, int start_index,
                std::string &comb, std::string &digits) {
        if (digits.size() == start_index) {
            answer.push_back(comb);
            return;
        }

        std::string letters = assoc[digits[start_index] - '0'];

        for (const auto &c : letters) {
            comb.push_back(c);
            helper(answer, start_index + 1, comb, digits);
            comb.pop_back();
        }
    }

    std::vector<std::string> letterCombinations(std::string digits) {

        if (digits.size() == 0) return {};

        std::vector<std::string> result;
        std::string s;

        helper(result, 0, s, digits);

        return result;
    }
};

int main() {}
