class Solution {
public:
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;

        int ans = 0;
        queue<pair<TreeNode*, int>> q;

        q.push({root, root->val});

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            TreeNode* node = curr.first;
            int sum = curr.second;
            if (!node->left && !node->right)
                ans += sum;
            if (node->left) 
                q.push({node->left, sum * 10 + node->left->val});
            if (node->right)
                q.push({node->right, sum * 10 + node->right->val});
        }

        return ans;
    }
};
