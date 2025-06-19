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
    ListNode *merge(ListNode *a , ListNode *b){
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy ;
        while(a && b){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
            }
            else{
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        if(a)
            temp->next = a;
        if(b)
            temp->next = b ;

        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        while(lists.size() > 1){
            ListNode *a = lists.back();
            lists.pop_back();
            ListNode *b = lists.back();
            lists.pop_back();
            ListNode *merged = merge(a,b);
            lists.push_back(merged);
        }
        return lists.empty() ? nullptr : lists[0];
    }
};