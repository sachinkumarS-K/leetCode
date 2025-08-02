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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* temp = dummy;
        ListNode* curr = head;
        while (curr) {
            if (curr->val != val) {
                temp->next = curr;
                temp = temp->next;
            }
            curr = curr->next;
        }
        temp->next = nullptr;
        return dummy->next;
    }
};