
class Solution {
public:
    TreeNode* buildTreeRecur(unordered_map<int, int>& mp, vector<int>& preorder,
                             int& idx, int l, int r) {
        if (l > r)
            return nullptr;
        int rootVal = preorder[idx++];

        TreeNode* root = new TreeNode(rootVal);
        int index = mp[rootVal];
        root->left = buildTreeRecur(mp, preorder, idx, l, index - 1);
        root->right = buildTreeRecur(mp, preorder, idx, index + 1, r);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); i++)
            mp[inorder[i]] = i;

        int preIndex = 0;
        TreeNode* root =
            buildTreeRecur(mp, preorder, preIndex, 0, inorder.size() - 1);

        return root;
    }
};