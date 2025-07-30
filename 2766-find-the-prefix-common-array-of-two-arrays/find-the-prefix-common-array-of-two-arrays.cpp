class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans(n);
        vector<int>inA(n+1 ,0);
        vector<int>inB(n+1 ,0);
        for(int i = 0 ; i<n ; i++){
            int count = 0 ;
            inA[A[i]] = 1 ;
            inB[B[i]] = 1;
            for(int i = 0 ; i<n+1; i++){
                if(inA[i] && inB[i])
                    count++;
            }
            ans[i] = count;
        }
        return ans;
    }
};
