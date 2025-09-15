class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;

        sort(nums.rbegin(), nums.rend());
        int i = 1;
        ans.push_back(nums[0]);
        int j = 0 ;
        while(k > 1 && i < nums.size()){
            if(ans[j] == nums[i]){
                i++;
                continue;
            }
            ans.push_back(nums[i++]);
            k--;
            j++;
        }
        return ans;
    }
};