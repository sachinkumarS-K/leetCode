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
    void inorder(TreeNode *root , vector<int>&arr){
        if(root == nullptr)
            return ;
        inorder(root->left , arr);
        arr.push_back(root->val);
        inorder(root->right , arr);
    }
    int findLower(vector<int>&arr , int k){
        int l = 0 , h = arr.size()-1;
        int ans = -1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(arr[m] == k)
                return arr[m];
            else if(arr[m] > k){
                h = m-1;
            }
            else{
                ans = arr[m];
                l = m+1;
            }
        }
        return ans;
    }
    int findUpper(vector<int>&arr ,int k){
         int l = 0 , h = arr.size()-1;
        int ans = -1;
        while(l <= h){
            int m = l + (h-l)/2;
            if(arr[m] == k)
                return arr[m];
            else if(arr[m] > k){
                ans = arr[m];
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int>arr;
        inorder(root ,arr);
        vector<vector<int>>ans;

        for(int i  = 0 ; i<queries.size() ; i++){
           vector<int>temp ;
           temp.push_back(findLower(arr , queries[i]));
           temp.push_back(findUpper(arr , queries[i]));
           ans.push_back(temp);
        }

        return ans;
    }
};