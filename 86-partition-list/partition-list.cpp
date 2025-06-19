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
    ListNode* partition(ListNode* head, int x) {
        ListNode *dummyLow = new ListNode(-1);
        ListNode *dummyHigh = new ListNode(-1);
        ListNode *low = dummyLow , *high = dummyHigh  ;

        while(head){
            if(head->val < x){
                low->next = head;
                low = low->next;
            }
            else{
                high->next = head;
                high = high->next;
            }
            head = head->next;
        }
        high->next = nullptr;
        low->next = dummyHigh->next ;

        return dummyLow->next;
    }
};