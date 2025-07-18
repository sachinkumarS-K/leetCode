class Solution {
public:
    void reverseTree(TreeNode* left, TreeNode* right, int level) {
        if (!left || !right)
            return;

        if (level & 1) {
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }

        reverseTree(left->left, right->right, level + 1);
        reverseTree(left->right, right->left, level + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root)
            return nullptr;
        reverseTree(root->left, root->right, 1); 
        return root;
    }
};
