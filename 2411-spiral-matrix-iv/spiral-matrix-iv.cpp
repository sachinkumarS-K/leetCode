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
        vector<vector<int>> arr(m, vector<int>(n, -1));

        int minRow = 0;
        int maxRow = m - 1;
        int minCol = 0;
        int maxCol = n - 1;
        int count = 1;

        ListNode* temp = head;

        while (minRow <= maxRow && minCol <= maxCol) {
            for (int i = minCol; i <= maxCol; i++) {
                if (temp == nullptr) {
                    return arr;
                }
                arr[minRow][i] = temp->val;
                temp = temp->next;
            }
            minRow++;
            if (minRow > maxRow || minCol > maxCol)
                break;

            for (int i = minRow; i <= maxRow; i++) {
                if (temp == nullptr) {
                    return arr;
                }

                arr[i][maxCol] = temp->val;
                temp = temp->next;
            }
            maxCol--;
            if (minRow > maxRow || minCol > maxCol)
                break;

            for (int i = maxCol; i >= minCol; i--) {
                if (temp == nullptr) {
                    return arr;
                }
                arr[maxRow][i] = temp->val;
                temp = temp->next;
            }
            maxRow--;
            if (minRow > maxRow || minCol > maxCol)
                break;

            for (int i = maxRow; i >= minRow; i--) {
                if (temp == nullptr) {
                    return arr;
                }
                arr[i][minCol] = temp->val;
                temp = temp->next;
            }
            minCol++;
            if (minRow > maxRow || minCol > maxCol)
                break;
        }

        return arr;
    }
};