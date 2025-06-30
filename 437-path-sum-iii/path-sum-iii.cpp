/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *root , int &count , int target , long long curr){
        if(!root)
            return;
        curr += root->val;
        if(curr == target)
            count++;

        dfs(root->left , count, target , curr);
        dfs(root->right , count, target , curr);
       
    }
    void traverse(TreeNode*root , int target , int &count){
        if(!root)
            return;

        dfs(root , count , target , 0);
        traverse(root->left ,target , count);
        traverse(root->right ,target , count) ;
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0 ;

        traverse(root , targetSum , count);

        return count;
    }
};