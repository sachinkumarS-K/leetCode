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
    void dfs(TreeNode* root, int& ans, int level, int& maxLevel) {
        if (!root)
            return;
        if (!root->left && !root->right) {
            if (level > maxLevel) {
                maxLevel = level;
                ans = root->val;
            }
        }
        dfs(root->left, ans, level + 1, maxLevel);
        dfs(root->right, ans, level + 1, maxLevel);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans = root->val, maxLevel = -1;
        dfs(root, ans, 0, maxLevel);
        return ans;
    }
};