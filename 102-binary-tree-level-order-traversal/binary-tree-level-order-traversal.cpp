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
    void traverse(TreeNode* root, vector<vector<int>>& ans) {
        queue<TreeNode*> que;
        que.push(root);
        
        while (!que.empty()) {
            vector<int> temp;
            int n = que.size();
            for (int i = 0; i < n; i++) {
                TreeNode* curr = que.front();
                que.pop();
                temp.push_back(curr->val);
                if (curr->left != nullptr)
                    que.push(curr->left);
                if (curr->right != nullptr)
                    que.push(curr->right);
            }
            ans.push_back(temp);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) return {};
        vector<vector<int>> ans;
        traverse(root, ans);
        return ans;
    }
};