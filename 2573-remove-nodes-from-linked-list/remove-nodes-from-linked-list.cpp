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
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* curr = head;
        while (curr && curr->next) {
            if (curr->next->val < curr->val) {
                curr->next = curr->next->next;
            } else
                curr = curr->next;
        }
        return reverse(head);
    }
};
