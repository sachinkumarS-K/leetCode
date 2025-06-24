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
    int findDiameter(TreeNode* root, int& maxDiameter) {
        if (root == nullptr)
            return 0;
        int leftHeight = findDiameter(root->left, maxDiameter);
        int rightHeight = findDiameter(root->right, maxDiameter);

        maxDiameter = max(maxDiameter, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter = 0;
        findDiameter(root, maxDiameter);

        return maxDiameter;
    }
};