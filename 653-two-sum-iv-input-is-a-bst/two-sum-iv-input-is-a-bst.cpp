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
    bool dfs(TreeNode* root, int k, set<int>& st) {
        if (!root)
            return false;
        if (st.find(k - root->val) != st.end())
            return true;

        st.insert(root->val);

        return (dfs(root->left, k, st) || dfs(root->right, k, st));
    }
    bool findTarget(TreeNode* root, int k) {
        set<int> st;
        return dfs(root, k, st);
    }
};