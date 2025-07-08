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
    TreeNode* build(vector<int>& postorder, unordered_map<int, int>& mp,
                    int& idx, int l, int r) {
        if (l > r)
            return nullptr;

        TreeNode* root = new TreeNode(postorder[idx]);
        int i = mp[postorder[idx--]];

        root->right = build(postorder, mp, idx, i + 1, r);
        root->left = build(postorder, mp, idx, l, i - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); ++i)
            mp[inorder[i]] = i;
        int postIdx = inorder.size() - 1;

        return build(postorder, mp, postIdx, 0, postIdx);
    }
};