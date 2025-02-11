class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> dis(n);

        for(int i = 0 ; i<n ; i++){
            int c = prices[i];
            for(int j = i+1 ; j<n ; j++){
                if(prices[j] <= prices[i]){
                    c = prices[i]-prices[j];
                    break;
                }
            }
            dis[i] = c;
        }
        return dis;
    }
};