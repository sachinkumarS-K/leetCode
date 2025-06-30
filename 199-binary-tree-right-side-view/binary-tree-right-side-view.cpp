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
    void leftView(TreeNode* root, int curr, int& maxLevel, vector<int>& ans) {
        if (root == nullptr)
            return;
        if (curr > maxLevel) {
            ans.push_back(root->val);
            maxLevel = curr;
        }
        leftView(root->right, curr + 1, maxLevel, ans);
        leftView(root->left, curr + 1, maxLevel, ans);
        
    }
    vector<int> rightSideView(TreeNode* root) {

        int maxLevel = 0;
        vector<int> ans;
        leftView(root, 1, maxLevel, ans);

        return ans;
    }
};