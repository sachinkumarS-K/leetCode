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
    int binToDec(vector<int> arr) {
        int ans = 0;
        for (int bit : arr) {
            ans = ans * 2 + bit;
        }
        return ans;
    }
    int solve(TreeNode* root, vector<int>& temp) {
        if (!root)
            return 0;
        temp.push_back(root->val);
        int ans = 0;
        if (!root->left && !root->right) {
            ans = binToDec(temp);
        } else {
            ans += solve(root->left, temp);
            ans += solve(root->right, temp);
        }

        temp.pop_back();
        return ans;
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int> temp;
        return solve(root, temp);
    }
};