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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> occ;
        for (int i : nums)
            occ.insert(i);

        ListNode* curr = head;
        while (curr && curr->next) {
            if (occ.find(curr->val) != occ.end()) {
                if (curr == head)
                    head = curr->next;
            }
            else if(occ.find(curr->next->val) != occ.end()){
                curr->next = curr->next->next;
                continue;
            }
            curr = curr->next;
        }

        return head;
    }
};