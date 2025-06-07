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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow;
        ListNode* pre = NULL;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        while (pre) {
            if (pre->val != head->val)
                return false;

            pre = pre->next;
            head = head->next;
        }
        return true;
    }
};