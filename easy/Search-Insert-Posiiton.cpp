#include <vector>

class Solution {
  public:
    int searchInsert(std::vector<int> &nums, int target) {
        int x = 0;
        for (; x < nums.size() && target > nums[x]; x++)
            ;
        return x;
    }
};

int main() {}
