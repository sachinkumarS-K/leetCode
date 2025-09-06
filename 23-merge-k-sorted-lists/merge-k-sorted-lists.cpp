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
    typedef pair<int, ListNode*> ppi;
    ListNode *merge(ListNode *h1 , ListNode *h2){
         ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while (h1 && h2) {
            if (h1->val > h2->val) {
                temp->next = h2;
                h2 = h2->next;
            } else {
                temp->next = h1;
                h1 = h1->next;
            }
            temp = temp->next;
        }

        if (h1) temp->next = h1;
        if (h2) temp->next = h2;

        return dummy->next;
    }
    ListNode* merge(vector<ListNode*>& arr , int curr){
        if (curr == arr.size() - 1)
            return arr[curr];
        
        return merge(merge(arr, curr + 1), arr[curr]);
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
       if (arr.empty()) return nullptr;
        return merge(arr, 0);
        
    }
};