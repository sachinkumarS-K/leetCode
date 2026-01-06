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
    int getLevel(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(getLevel(root->left), getLevel(root->right));
    }
    void dfs(TreeNode *root , int i , vector<int>&arr){
        if(!root)
            return;
        arr[i] += root->val;

        dfs(root->left , i+1 , arr);
        dfs(root->right , i+1 , arr);
    }
    int maxLevelSum(TreeNode* root) {
        
        int l =  getLevel(root);
        vector<int> arr(l , 0);

        dfs(root , 0 , arr);

        int lev = -1 , maxSum = INT_MIN;
        for(int i = 0 ; i<arr.size() ; i++){
            if(maxSum < arr[i]){
                maxSum = arr[i];
                lev = i+1;
            }
        }
        return lev;
    }
};