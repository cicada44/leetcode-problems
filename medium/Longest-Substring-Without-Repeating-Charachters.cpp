#include <algorithm>
#include <string>
#include <vector>

class Solution {
  public:
    int lengthOfLongestSubstring(std::string &s) {
        int rep_cnter = 0;
        std::vector<int> v{rep_cnter};

        auto beg = s.cbegin();
        for (auto x = s.cbegin(); x != s.cend(); ++x) {
            if (std::find(beg, x, *x) == x) {
                ++rep_cnter;
            } else {
                x = find(beg, x, *x) + 1;
                ++beg;
                v.push_back(rep_cnter);
                rep_cnter = 1;
            }
        }
        v.push_back(rep_cnter);

        return *(std::max_element(v.begin(), v.end()));
    }
};

int main() {}
