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
    ListNode*reverse(ListNode *head){
        ListNode *curr = head , *pre = nullptr , *next ;
        while(curr){
            next = curr->next;
            curr->next = pre;
            pre = curr ;
            curr = next;
        }
        return pre;
    }
    int getDecimalValue(ListNode* head) {

        int ans  = 0 ,  i = 0 ;
        head = reverse(head);
        while(head){
            ans += pow(2,i++)*head->val;
            head = head->next;
        }


        return ans;
    }
};