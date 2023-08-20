//-----------------------------------------------------------------------------
//
// Source code for 'Same Tree' task
// URL: https://leetcode.com/problems/same-tree/
//
//-----------------------------------------------------------------------------

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
    bool comp_preorder(TreeNode *p, TreeNode *q) {
        if (p == nullptr && q != nullptr || p != nullptr && q == nullptr)
            return false;
        if (p != nullptr && q != nullptr) {
            if (p->val != q->val) return false;
            return comp_preorder(p->left, q->left) &&
                   comp_preorder(p->right, q->right);
        }
        return true;
    }

    bool isSameTree(TreeNode *p, TreeNode *q) { return comp_preorder(p, q); }
};

int main() {}
