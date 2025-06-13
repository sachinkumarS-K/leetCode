class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int first = nums[i];
            int l = i + 1, h = nums.size() - 1;

            while (l < h) {
                int curr = nums[l] + nums[h] + first ;
                if (curr - target == 0)
                    return target;
                else if (abs(curr - target) < minDiff) {
                    minDiff = abs(curr - target);
                    ans = curr ;
                }

                if(curr > target)
                    h-- ;             
                else 
                    l++ ;
                
            }
        }
        return ans;
    }
};