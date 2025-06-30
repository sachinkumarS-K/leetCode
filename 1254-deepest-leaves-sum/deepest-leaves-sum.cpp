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
    int getLevel(TreeNode *root){
        if(root == nullptr)
            return 0;
        return 1 + max(getLevel(root->left) , getLevel(root->right));
    }
    void findSum(TreeNode *root , int curr , int maxLevel , int &sum){
        if(root == nullptr)
            return;
        if(curr == maxLevel){
            sum += root->val;
            return;
        }
        findSum(root->left , curr+1 , maxLevel , sum);
        findSum(root->right , curr+1 , maxLevel , sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int maxLevel = getLevel(root);

        int sum = 0;
        findSum(root , 1 , maxLevel ,sum);

        return sum;
    }
};