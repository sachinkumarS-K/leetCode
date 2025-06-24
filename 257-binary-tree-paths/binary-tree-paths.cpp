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
    void findPath(TreeNode *root , string path , vector<string> &ans){
        if(root == nullptr)
            return ;

        if(!path.empty())
            path += "->";

        path += to_string(root->val); 
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(path);
            return;
        }
       

        findPath(root->left , path , ans);
        findPath(root->right , path , ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string path = "" ;
        findPath(root , path , ans);

        return ans;
    }
};