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
    TreeNode* iop(TreeNode* root) {
        root = root->left;
        while (root->right != nullptr) {
            root = root->right;
        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root)
            return nullptr;

        if (root->val == key) {
            if (!root->left && !root->right) {
                return nullptr;
            } else if (!root->left || !root->right) {
                if (root->left != nullptr) {
                    return root->left;
                } else {
                    return root->right;
                }
            } else {
                TreeNode* temp = iop(root);
                root->val = temp->val;
                root->left = deleteNode(root->left, temp->val);
            }
        } else if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else {
            root->right = deleteNode(root->right, key);
        }

        return root;
    }
};