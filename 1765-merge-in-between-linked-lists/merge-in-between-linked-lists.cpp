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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* t1 = list1;
        for (int i = 0; i < a - 1; ++i)
            t1 = t1->next;

        ListNode* t2 = t1;
        for (int i = 0; i < b - a + 2; ++i)
            t2 = t2->next;

        ListNode* x = list2;
        while (x->next)
            x = x->next;

        t1->next = list2;
        x->next = t2;

        return list1;
    }
};