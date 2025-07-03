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
    TreeNode* first = nullptr;
    void find(TreeNode* root, int start) {
        if(!root)
            return ;
        if (root->val == start) {
            first = root;
            return;
        }
        find(root->left, start);
        find(root->right, start);
    }
    void markParent(TreeNode*root , unordered_map<TreeNode* , TreeNode*>&mp){
            if(!root)
                return ;
            if(root->left)
                mp[root->left] = root;
            if(root->right)
                mp[root->right] = root;

            markParent(root->left , mp);
            markParent(root->right , mp);
    }
    int amountOfTime(TreeNode* root, int start) {
        find(root , start);

        int maxLevel = 0 ;
        unordered_map<TreeNode* , TreeNode*> parentMap;
        markParent(root , parentMap);
        unordered_set<TreeNode*>visited ;
        visited.insert(first);
        queue<pair<TreeNode * , int>>que;
        que.push({first , 0});
        while(!que.empty()){
            TreeNode * curr = que.front().first;
            int level = que.front().second;
            que.pop();
            maxLevel = max(level , maxLevel);
            if(curr->left && visited.find(curr->left) == visited.end()){
                que.push({curr->left , level+1});
                visited.insert(curr->left);
            }
             if(curr->right && visited.find(curr->right) == visited.end()){
                que.push({curr->right , level+1});
                visited.insert(curr->right);
            }
            if(parentMap.find(curr) != parentMap.end() && visited.find(parentMap[curr]) == visited.end()){
                    que.push({parentMap[curr] , level+1});
                    visited.insert(parentMap[curr]);
            }
        }

        return maxLevel;
    }
};