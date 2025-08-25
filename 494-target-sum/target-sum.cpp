class Solution {
public:
    map<pair<int,int>, int> dp;

    int solve(vector<int>& arr, int i , int currSum , int target) {
        if(i == arr.size())
           return currSum == target ? 1 : 0;

        // string key = to_string(i) + "," + to_string(currSum);
        if(dp.count({i , currSum}))   return dp[{i , currSum}];

        int plus = solve(arr , i+1 , currSum + arr[i] , target);
        int minus = solve(arr , i+1 , currSum - arr[i] , target);

        return dp[{i , currSum}] =  plus + minus ;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
         return  solve(nums,0 , 0 , target);
    }
};