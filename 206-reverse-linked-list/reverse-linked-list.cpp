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
    ListNode* reverseList(ListNode* head) {
        ListNode * pre , *curr , *n ;
        pre = NULL ;
        curr = n = head ;
        while(n != NULL){
            n = n->next ;
            curr->next = pre ;
            pre = curr ;
            curr = n ;
        }
        head = pre ;

        return head ;
    }
};