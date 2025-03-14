class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low = 1 , high = INT_MIN ;
        int ans = 0 ;
        for(auto & i : candies)
            high = max(i , high);

        while(low <= high){
            int mid = low +(high - low)/2 ;
            long long int c = 0 ;
            for(auto i : candies)
                c += i/mid ;

            if(c >= k)
                ans = mid , low = mid + 1;
            else
                high = mid - 1;
        }
        return ans ;
    }
};