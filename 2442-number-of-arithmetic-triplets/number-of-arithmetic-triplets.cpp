class Solution {
public:
    bool check(vector<int>arr , int target){
        for(int i : arr){
            if(i == target)
                return true;
        }
        return false;
    }
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0 ;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(check(nums , nums[i] + diff) && check(nums , nums[i] + diff*2))
                count++;
        }

        return count;
    }
};