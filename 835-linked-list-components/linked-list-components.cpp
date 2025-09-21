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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>mp;
        for(int i : nums)
            mp.insert(i);

        int count = 0;
        bool flag = false;
        while(head){
            if(mp.count(head->val)){
                flag = true;
            }
            else{
                if(flag){
                    count++;
                    flag = false;
                }
            }
            
            head = head->next;
        }
        return flag ? count+1 : count;
    }
};