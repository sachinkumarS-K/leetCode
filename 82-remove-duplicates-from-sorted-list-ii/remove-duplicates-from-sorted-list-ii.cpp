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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>freq;
        
        for(ListNode *temp = head; temp ; temp = temp->next)
            freq[temp->val]++;

        ListNode *dummy = new ListNode(-1);
        dummy->next = head;

        ListNode *curr = head;
        ListNode *prev = dummy;
        while(curr){
            if(freq[curr->val] > 1){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};