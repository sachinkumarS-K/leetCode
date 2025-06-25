/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode *root , TreeNode *target){
        if(root == nullptr)
            return false;
        if(root == target)
            return true;

        return check(root->left , target) || check(root->right , target);
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr || root == p || root == q)
            return root;

        bool pInLeft = check(root->left , p);
        bool qInLeft = check(root->left , q);

        if(!pInLeft && qInLeft)
            return root;

        if(pInLeft && !qInLeft)
            return root;

        if(pInLeft && qInLeft)
            return lowestCommonAncestor(root->left , p,q);
        else
            return lowestCommonAncestor(root->right , p,q);
    }
};