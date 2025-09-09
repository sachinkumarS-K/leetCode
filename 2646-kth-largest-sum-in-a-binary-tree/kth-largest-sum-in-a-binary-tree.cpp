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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>que;
        que.push(root);
        vector<long long int>arr;
        while(!que.empty()){
            long long sum = 0;
            int n = que.size();
            for(int i = 0 ; i<n ; i++){
                TreeNode*node = que.front();
                que.pop();
                sum += node->val;
                if(node->left)  que.push(node->left);
                if(node->right)  que.push(node->right);
            }
            arr.push_back(sum); 
        }
        if(k > arr.size())  return -1;
        sort(arr.begin() , arr.end());
        return arr[arr.size()-k];
    }
};