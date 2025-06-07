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
    int getLen(ListNode* head) {
        int c = 0;
        while (head) {
            c++;
            head = head->next;
        }
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getLen(head);
        if (len < k) 
            return head;
        ListNode* pre = NULL;
        ListNode* curr = head;
        ListNode* next = curr->next;
        int count = 0;
        while (count < k) {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
            count++;
        }

        if (next != NULL)
            head->next = reverseKGroup(next, k);

        return pre;
    }
};