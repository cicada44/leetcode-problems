//-----------------------------------------------------------------------------
//
// Source code for 'Symmetric Tree' task
// URL: https://leetcode.com/problems/symmetric-tree/
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
    bool comp(TreeNode *node1, TreeNode *node2) {
        if (node1 == nullptr && node2 == nullptr) return true;
        if (node1 == nullptr ^ node2 == nullptr) return false;
        if (node1->val == node2->val) {
            return comp(node1->left, node2->right) &&
                   comp(node1->right, node2->left);
        }
        return false;
    }

    bool isSymmetric(TreeNode *root) { return comp(root, root); }
};

int main() {}
