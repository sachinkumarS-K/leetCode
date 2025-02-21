class Solution {
public:

    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans(nums.size() , -1);

        for(int i = 0; i<nums.size() ; i++){
             int pos = index[i]; 
            if(ans[index[i]] == -1 )
                ans[pos] = nums[i] ;
            else{
                for (int j = nums.size() - 1; j > pos; j--) {
                ans[j] = ans[j - 1];
            }
                
                ans[pos] = nums[i];
            }
                
        }
        return ans;
    }
};