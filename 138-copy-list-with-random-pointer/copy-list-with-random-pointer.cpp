/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* solve(Node *head , unordered_map<Node*,Node*>&mp){
        if(!head)
            return nullptr;

        Node *newHead = new Node(head->val);
        mp[head] = newHead;
        newHead->next = solve(head->next , mp);
        if(head->random)
            newHead->random = mp[head->random];
        
        return newHead;
    }
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>mp;
        return solve(head , mp);
    }
};