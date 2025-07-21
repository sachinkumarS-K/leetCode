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
    int maxLevelSum(TreeNode* root) {
        
        int level = INT_MIN;
        queue<TreeNode*> que;
        que.push(root);
        int j = 1, maxSum = INT_MIN;
        while (!que.empty()) {
            int n = que.size() , sum = 0;
            for (int i = 0; i < n; i++) {
                sum += que.front()->val;
                if (que.front()->left)
                    que.push(que.front()->left);
                if (que.front()->right)
                    que.push(que.front()->right);
                que.pop();
            }
            if (sum > maxSum) {
                level = j;
                maxSum = sum;
            }
            j++;
        }

        return level;
    }
};