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
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == nullptr || k == 0)
            return head;
        int n = 0 ;
        ListNode *temp = head , *tail ;

        while(temp){
            n++ ;
            if(temp->next == nullptr)
                tail = temp;
            temp = temp->next ;
        }
        k = k%n ;
        temp = head ;
        int i = 1 ;
        while(i < n-k){
            temp = temp->next;
            i++;
        }
        tail->next = head;
        head = temp->next;
        temp->next = nullptr;

        return head;
    }
};