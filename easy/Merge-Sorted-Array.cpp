//-----------------------------------------------------------------------------
//
// Source code for 'Merge Sorted Arrat' task
// URL: https://leetcode.com/problems/merge-sorted-array/
//
//-----------------------------------------------------------------------------

#include <algorithm>
#include <vector>

#include <iostream>

class Solution {
  public:
    void merge(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n) {
        for (int i = m, j = 0; j != n; ++j, ++i)
            nums1[i] = nums2[j];
        std::sort(nums1.begin(), nums1.end());
    }
};

int main() {}
