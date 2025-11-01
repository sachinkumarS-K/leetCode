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
    ListNode* modifiedList(vector<int>& arr, ListNode* head) {
        set<int> st(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* curr = dummy;

        while (curr && curr->next) {
            if (st.find(curr->next->val) != st.end())
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }

        return dummy->next;
    }
};