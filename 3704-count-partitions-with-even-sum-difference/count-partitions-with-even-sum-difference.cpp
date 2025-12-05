class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count = 0;
        int sum = 0 ;
        for(int i : nums)
            sum += i;
        int currSum = 0;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            currSum += nums[i];
            if((sum - 2*currSum) % 2 == 0)
                count++;
        }

        return count;
    }
};