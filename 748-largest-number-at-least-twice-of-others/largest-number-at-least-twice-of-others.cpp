class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int larEle = INT_MIN , idx = -1;
        for(int i = 0 ; i<nums.size() ; i++){
            if(larEle < nums[i]){
                larEle = nums[i];
                idx = i;
            }
        }
        for(int i : nums){
            if(i != larEle && 2*i > larEle)
                return -1;
        }
        return idx;
    }
};