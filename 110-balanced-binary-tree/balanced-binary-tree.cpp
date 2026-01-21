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
    int getHeight(TreeNode* root) {
        if (!root)
            return 0;
        return 1 + max(getHeight(root->left), getHeight(root->right));
    }
    bool check(TreeNode *root){
        if(!root)
            return true;

        int left = getHeight(root->left);
        int right = getHeight(root->right);

        if(abs(left - right) > 1){
            return false;
        }
        else{
            return (check(root->left) && check(root->right));
        }
    }
    bool isBalanced(TreeNode* root) {

        
        return check(root);
    }
};