class Solution {
public:
    void bfs(TreeNode*root , vector<int>&ans){
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            int maxi = INT_MIN;
            for(int i = 0 ; i<n ; i++){
                TreeNode *curr = que.front();
                que.pop();
                maxi = max(maxi , curr->val);
                if(curr->left)  que.push(curr->left);
                if(curr->right)  que.push(curr->right);
            }
            ans.push_back(maxi);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        if(!root)   return {};
        vector<int>ans ;
        bfs(root , ans);
        return ans;
    }
};