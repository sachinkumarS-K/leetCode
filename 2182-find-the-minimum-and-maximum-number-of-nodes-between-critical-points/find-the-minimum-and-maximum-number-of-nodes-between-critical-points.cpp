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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head->next->next)
            return {-1, -1};
        ListNode* temp = head->next;
        int prev = head->val;
        vector<int> arr;
        int i = 2;
        int minPoint = INT_MAX;

        while (temp->next) {
            int value = temp->val;
            if ((value > prev && value > temp->next->val) ||
                (value < prev && value < temp->next->val)) {
                arr.push_back(i);
                cout << i << " ";
            }
            i++;
            int n = arr.size();
            if(n > 1){
                minPoint = min(arr[n-1] - arr[n-2] , minPoint);
            }
            prev = value;
            temp = temp->next;
        }
        int n = arr.size();
        if (n < 2)
            return {-1, -1};
        int maxPoint = arr[n - 1] - arr[0];

        return {minPoint, maxPoint};
    }
};