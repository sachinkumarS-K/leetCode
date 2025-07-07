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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = nullptr;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = reverse(head);
        int c = 0;
        ListNode* x = temp , *prev = nullptr;
        while (temp) {
            int sum = (temp->val * 2) + c;
            c = sum / 10;
            temp->val = sum % 10;
            prev = temp;
            temp = temp->next;

        }
        if (c) {
            ListNode* newNode = new ListNode(c);
            prev->next = newNode;
        }

        return reverse(x);
    }
};