class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string ans = "";

        for (int i = 0; i < nums.size(); i++)
                ans += to_string(nums[i]);

        vector<int> arr ;

        for(int i = 0 ; i<ans.length() ; i++){
            arr.push_back(ans[i] - 48);
        }
        return arr ;
    }
};