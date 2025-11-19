class Solution {
    public int dominantIndex(int[] nums) {
        int larEle = Integer.MIN_VALUE , idx = -1;
        for(int i = 0 ; i<nums.length ; i++){
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
}