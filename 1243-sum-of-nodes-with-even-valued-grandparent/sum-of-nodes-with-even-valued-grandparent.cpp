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
    void dfs(TreeNode *root  , TreeNode *dada , TreeNode *papa, int &sum ){
        if(!root)
            return ;
        if(dada && dada->val % 2 == 0)
            sum += root->val;
        
       dfs(root->left  , papa , root , sum);
       dfs(root->right  , papa , root , sum);

    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0 ;
        dfs(root , nullptr , nullptr , sum);
        return sum ;
    }
};