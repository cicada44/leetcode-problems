#include <algorithm>
#include <string>
#include <vector>

class Solution {
  public:
    std::string longestCommonPrefix(std::vector<std::string> &strs) {
        size_t i = 0;
        for (; i < (*std::min_element(strs.begin(), strs.end())).size(); ++i)
            for (auto x = strs.cbegin(); x != strs.cend() - 1; ++x)
                if ((*x)[i] != (*(x + 1))[i]) return strs[0].substr(0, i);
        return strs[0].substr(0, i);
    }
};

int main() {}
