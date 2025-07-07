/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root)
            return nullptr;
        queue<Node*> que;
        que.push(root);
        while (!que.empty()) {
            int n = que.size();
            Node* prev = nullptr;
            for (int i = 0; i < n; i++) {
                Node* curr = que.front();
                que.pop();
                if (prev)
                    prev->next = curr;
                                 
                prev = curr;

                if (curr->left)
                    que.push(curr->left);

                if (curr->right)
                    que.push(curr->right);
            }
            prev = nullptr;
        }
        return root;
    }
};