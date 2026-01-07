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
    long long getSum(TreeNode*root){
        if(!root)
            return 0;
        return root->val + getSum(root->left) + getSum(root->right);
    }
    int dfs(TreeNode *root ,long long totalSum , long long &maxProd){
        if(!root)
            return 0;
        long long left = dfs(root->left, totalSum, maxProd);
        long long right = dfs(root->right, totalSum, maxProd);

        int sum = root->val + left + right;

        long long product = sum * (totalSum - sum);
        maxProd = max(maxProd, product);
        return sum;     
    }
    int maxProduct(TreeNode* root) {
        long long sum = getSum(root);

        long long maxProd = 0;
        dfs(root ,sum , maxProd);       
        return maxProd % 1000000007;;
    }
};