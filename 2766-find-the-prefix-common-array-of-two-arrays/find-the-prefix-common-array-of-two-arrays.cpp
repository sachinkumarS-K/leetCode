class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);
        int count = 0;

        vector<int>arr(51 , 0);
        for (int i = 0; i < n; i++) {
            arr[A[i]]++;
            if (arr[A[i]] == 2)
                count++;
            arr[B[i]]++;
            if (arr[B[i]] == 2)
                count++;
            ans[i] = count;
        }

        return ans;
    }
};
