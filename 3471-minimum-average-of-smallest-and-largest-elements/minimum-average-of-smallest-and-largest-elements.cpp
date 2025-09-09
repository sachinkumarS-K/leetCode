class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float>arr ;
        sort(nums.begin() , nums.end());
        int l = 0 , h = nums.size()-1;
        while(l < h)
            arr.push_back(nums[l++] + nums[h--]);
        int maxi = INT_MAX;
        for(int i : arr)
            maxi = min(i , maxi);
        return maxi/2.0;
    }
};