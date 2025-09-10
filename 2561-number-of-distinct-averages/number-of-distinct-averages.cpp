class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<int>st;
        sort(nums.begin() , nums.end());
        int l = 0 , h = nums.size()-1;
        while(l < h)
            st.insert(nums[l++]+nums[h--]);
        return st.size();
    }
};