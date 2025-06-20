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
    int findLength(ListNode *head){
        int len = 0 ;
        while(head){
            len++;
            head = head->next;
        }
        return len;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k , nullptr);

        int n = findLength(head);
        int size = n / k ;
        int rem = n % k;

        ListNode *temp = head;
        int i = 0 ;
        while(temp){
            ListNode *dummy = new ListNode(-1);
            ListNode *t = dummy ;
            int s = size ;
            if(rem > 0)
                s++ ;
            rem-- ;

            for(int i = 1 ; i<=s ; i++){
                t->next = temp;
                t = t->next;
                temp = temp->next;
            }
            t->next = nullptr;
            ans[i++] = dummy->next;
        }
        return ans;
    }
};