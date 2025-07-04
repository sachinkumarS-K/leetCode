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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        priority_queue<ppi , vector<ppi> , greater<ppi>>pq ;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] != nullptr)
                pq.push({arr[i]->val , arr[i]});
        }
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            temp->next = curr.second;
            temp = temp->next;

            if(curr.second->next != nullptr){
                    pq.push({curr.second->next->val ,curr.second->next});
            }
        }

        return dummy->next;
    }
};