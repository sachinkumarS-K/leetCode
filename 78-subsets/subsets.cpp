class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans,
                       vector<vector<int>>& arr, int i) {
        if (i >= nums.size()) {
            arr.push_back({ans});
            return;
        }
        getAllSubsets(nums, ans, arr, i + 1);
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, arr, i + 1);
        ans.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> arr ;
        // vector<int>ans ;
        // getAllSubsets(nums , ans , arr , 0);
        // return arr ;
        vector<vector<int>> ans;
        unsigned long long n = 1 << nums.size();
        for (unsigned long long  i = 0; i <n; i++) {
            vector<int> arr;
            for (unsigned long long j = 0; j < nums.size(); j++) 
                if ((i >> j) & 1)
                    arr.push_back(nums[j]);
                           
            ans.push_back(arr);
        }
        return ans;
    }
};