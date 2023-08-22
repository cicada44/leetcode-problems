//-----------------------------------------------------------------------------
//
// Source code for 'Valid Sudoku' task
// URL: https://leetcode.com/problems/valid-sudoku/
//
//-----------------------------------------------------------------------------

#include <unordered_set>
#include <vector>

#include <algorithm>

class Solution {
  public:
    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        std::unordered_set<char> set;
        int uniqValidElems = 0;

        for (const auto &row : board) {
            for (const auto &elem : row) {
                if (set.find(elem) != set.end()) return false;
                if (elem != '.') set.insert(elem);
            }
            set.clear();
        }

        for (size_t i = 0; i != 9; ++i) {
            for (size_t j = 0; j != 9; ++j) {
                if (set.find(board[j][i]) != set.end()) return false;
                if (board[j][i] != '.') set.insert(board[j][i]);
            }
            set.clear();
        }

        for (size_t i = 0; i != 9; i += 3) {
            for (size_t j = 0; j != 9; j += 3) {
                for (size_t l = i; l != i + 3; ++l) {
                    for (size_t h = j; h != j + 3; ++h) {
                        if (set.find(board[l][h]) != set.end()) return false;
                        if (board[l][h] != '.') set.insert(board[l][h]);
                    }
                }
                set.clear();
            }
        }

        return true;
    }
};

int main() {}
