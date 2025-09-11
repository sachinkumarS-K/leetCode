class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>ans;

        int maxi = INT_MIN ;
        for(int i : candies)
            maxi = max(maxi , i);
        for(int i : candies){
            if(i+extraCandies >= maxi)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};