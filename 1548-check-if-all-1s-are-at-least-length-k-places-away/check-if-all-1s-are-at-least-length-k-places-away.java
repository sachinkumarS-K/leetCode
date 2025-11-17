class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int count = 0 , idx = 0 ;
        for(int i = 0 ; i<nums.length ; i++)
            if(nums[i] == 1){
                idx = i;
                break;
        }
        for(int i = idx+1 ; i<nums.length ; i++){
            if(nums[i] == 0)
                count++;
            else if(i != 0 && count < k &&  nums[i] == 1)
                return false;
            else
                count = 0 ;
        }
        return true;
    }
}