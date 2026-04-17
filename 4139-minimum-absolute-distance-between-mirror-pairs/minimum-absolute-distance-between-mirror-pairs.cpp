class Solution {
public:
    int reverse(int n){
        int ans = 0;
        while(n){
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> seen; 
        int minDist = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int rev = reverse(nums[i]);
         
            if (seen.count(nums[i]))
                minDist = min(minDist, i - seen[nums[i]]);

            seen[rev] = i;
        }

        return minDist == INT_MAX ? -1 : minDist;
    }
};