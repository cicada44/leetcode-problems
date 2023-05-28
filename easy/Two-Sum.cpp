#include <vector>

#include <iostream>

class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::vector<int> vec_ans;
        for (int x = 0; x != nums.size(); x++) {
            for (int i = 0; i != nums.size(); i++) {
                if (x == i)
                    continue;
                if (nums[x] + nums[i] == target) {
                    vec_ans.push_back(x);
                    vec_ans.push_back(i);
                    return vec_ans;
                }
            }
        }
        return vec_ans;
    }
};

int main() {}
