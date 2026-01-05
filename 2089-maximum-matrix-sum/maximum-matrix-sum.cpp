class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int r = matrix.size() , c = matrix[0].size() ;
        long long maxSum = 0 ;
        int neg = 0 , mini = INT_MAX; 
        for(int i = 0 ; i<r ; i++){
            for(int j = 0 ; j<c ; j++){
                if(matrix[i][j] < 0)
                   neg++;
                maxSum += abs(matrix[i][j]);
                mini = min(mini, abs(matrix[i][j]));
            }
        }
        if(neg % 2 != 0)
           maxSum -= 2LL * mini;

        return maxSum;
    }
};