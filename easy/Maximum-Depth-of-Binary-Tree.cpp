//-----------------------------------------------------------------------------
//
// Source code for 'Maximum Depth of Binary Tree' task
// URL: https://leetcode.com/problems/maximum-depth-of-binary-tree/
//
//-----------------------------------------------------------------------------

#include <iostream>

/* Definition for a binary tree node. */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
  public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};

int main() {}
