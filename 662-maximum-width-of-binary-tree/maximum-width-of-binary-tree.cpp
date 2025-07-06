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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, int>> que;
        que.push({root, 0});
        int maxWidth = 0;
        while (!que.empty()) {
            TreeNode* curr = que.front().first;
            
            int currSize = que.size();
            int s = que.front().second;
            int e = que.back().second;
            maxWidth = max(maxWidth , e-s+1);
            for(int i = 0 ; i<currSize ; i++){
                auto curr = que.front();
                que.pop();
                unsigned long long idx = curr.second;
                if(curr.first->left){
                    que.push({curr.first->left ,idx*2+1});
                }
                if(curr.first->right){
                    que.push({curr.first->right ,idx*2+2});
                }
            }
        }

        return maxWidth;
    }
};