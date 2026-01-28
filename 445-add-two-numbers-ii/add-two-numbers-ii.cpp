/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> stk1, stk2;
        ListNode* t = l1;
        while (t) {
            stk1.push(t->val);
            t = t->next;
        }
        t = l2;
        while (t) {
            stk2.push(t->val);
            t = t->next;
        }
        t = NULL;
        int c = 0;
       
        while (!stk1.empty() || !stk2.empty() || c != 0) {
            int s = c;
            if (!stk1.empty()) {
                s += stk1.top();
                stk1.pop();
            }
            if (!stk2.empty()) {
                s += stk2.top();
                stk2.pop();
            }
            c = s / 10;
            ListNode* temp = new ListNode(s % 10);      
            temp->next = t;
            t = temp;
        }

        return t;
    }
};