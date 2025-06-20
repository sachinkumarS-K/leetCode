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
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return;

        ListNode *fast = head, *slow = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = reverse(slow->next);
        slow->next = nullptr;

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy , *first = head;
       while (first && second) {
            temp->next = first;
            first = first->next;
            temp = temp->next;

            temp->next = second;
            second = second->next;
            temp = temp->next;
        }
        if (first)
            temp->next = first;
        if (second)
            temp->next = second;

        head = dummy->next;
    }
};