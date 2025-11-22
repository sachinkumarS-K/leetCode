class Solution {
    int solve(int[]arr , int i){
        if(i >= arr.length)
            return 0;
        if(arr[i] % 3 != 0)
            return 1 + solve(arr , i+1);
        else
            return solve(arr , i+1);
    }
    public int minimumOperations(int[] nums) {
        return solve(nums , 0);
    }
}