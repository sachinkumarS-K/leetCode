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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = new ListNode(-1);
        ListNode *even = new ListNode(-1);
        ListNode *temp1 = odd, *temp2 = even , *temp = head;
        int i = 1 ;
        while(temp){
            if(i % 2 == 0){
                temp2->next = temp;
                temp2 = temp2->next;
            }
            else{
                temp1->next = temp;
                temp1 = temp1->next;
            }
            temp = temp->next;
            i++;
        }
        temp2->next = nullptr;
        temp1->next = even->next;

        return odd->next;
        
    }
};