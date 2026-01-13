class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int currSum = 0;
        int minSum = 0;
        int sum = 0;
        for(auto i : arr){
            sum += i;
            currSum += i ;
            minSum = min(currSum , minSum);
            if(currSum > 0)
                currSum = 0;
        }
        currSum = 0;
        int maxSum = INT_MIN;
        for(auto i : arr){
            currSum += i;
            maxSum = max(maxSum , currSum);
            if(currSum < 0)
                currSum = 0;
        }
        if(maxSum < 0)
            return maxSum;
        
        return max(sum - minSum , maxSum);
    }
};