class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxi = INT_MIN , bestBuy = arr[0];
        for(int i = 1 ; i<arr.size() ; i++){
            if(bestBuy > arr[i]){
                bestBuy = arr[i];
            }
            else if(arr[i]-bestBuy > maxi){
                maxi = arr[i] - bestBuy;
            }
        }
        return maxi == INT_MIN ? 0 : maxi;
    }
};