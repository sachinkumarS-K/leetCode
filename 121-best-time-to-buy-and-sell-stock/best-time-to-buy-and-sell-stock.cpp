class Solution {
public:
    int solve(vector<int>&arr , int i , int amt){
        if(i == arr.size()) return 0 ;
        
        int profit = arr[i] - amt ;
        amt = min(amt , arr[i]);
        int nextProfit = solve(arr , i+1 , amt);

        return max(profit , nextProfit);
    }
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2)   return 0 ;
        int ans = solve(prices , 1 , prices[0]);
        return ans;
    }
};