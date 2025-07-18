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
    int findSum(TreeNode*root , int &c){
        if(!root)
            return 0;
        c++;
        return root->val + findSum(root->left,c) + findSum(root->right,c);
        
    }
    void bfs(TreeNode* root, int &count ) {

        queue<TreeNode*> que;
        que.push(root);
        while (!que.empty()) {
            TreeNode* curr = que.front();
            que.pop();
            int c = 0 ;
           int sum = findSum(curr , c);
           if(curr->val == sum / c)
                count++;
            if (curr->left != nullptr)
                que.push(curr->left);
            if (curr->right != nullptr)
                que.push(curr->right);
            
        }
    }
    int averageOfSubtree(TreeNode* root) {
        
        int count = 0 ;
        bfs(root ,count);

        return count;
    }
};