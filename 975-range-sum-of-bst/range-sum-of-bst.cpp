/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, int l, int h, int& sum) {
        if (!root)
            return;

        if (root->val >= l && root->val <= h) {
            sum += root->val;
            dfs(root->left, l, h, sum);
            dfs(root->right, l, h, sum);
        } else if (root->val < l)
            dfs(root->right, l, h, sum);
        else if (root->val > h)
            dfs(root->left, l, h, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;

        dfs(root, low, high, sum);

        return sum;
    }
};