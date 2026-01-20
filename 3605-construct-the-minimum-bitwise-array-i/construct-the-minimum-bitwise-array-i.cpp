class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;

        for(int i = 0 ; i<nums.size() ; i++){
            bool flag = false;
            for(int j = 1 ; j<nums[i] ; j++){
                if((j | (j+1)) == nums[i]){
                    ans.push_back(j);
                    flag = true;
                    break;
                }
            }
            if(!flag)
                ans.push_back(-1);
        }

        return ans;
    }
};