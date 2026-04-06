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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int total = m*n ;
        int c = 0 ;
        vector<vector<int>>ans(m , vector<int>(n , -1));
        int sr = 0 , er = m-1;
        int sc = 0 , ec = n-1;
        while(c < total && head != NULL){
            for (int i = sc; i <= ec && head != NULL; i++) {
                ans[sr][i] = head->val;
                head = head->next;
                c++;
            }
            sr++ ;
            for(int i = sr ; i <= er && head != NULL; i++){
                ans[i][ec] = head->val;
                head = head->next;
                c++;
            }
            ec--;
            for(int i = ec ; i>= sc&& head != NULL ; i--){
                ans[er][i] = head->val;
                head = head->next;
                c++;
            }
            er--;
            for (int i = er; i >= sr && head != NULL; i--) {
                ans[i][sc] = head->val;
                head = head->next;
                c++;
            }
            sc++;
        }

        return ans ;
    }
};