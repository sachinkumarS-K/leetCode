class Solution {
    static boolean check(int[] nums, int[][] queries , int k){
        int []diff = new int[nums.length];
        
        for(int i = 0 ; i<= k ; i++){
            int l = queries[i][0] , r = queries[i][1] , x = queries[i][2];
            diff[l] += x;
            if (r + 1 < nums.length)
                diff[r + 1] -= x;
        }
        int sum = 0;
        for(int i = 0 ; i<nums.length ; i++){
            sum += diff[i];
            diff[i] = sum ;
            if(nums[i] - diff[i] > 0)  
                return false;
        }
        return true;
    }
    public int minZeroArray(int[] nums, int[][] queries) {
        int n = nums.length , q = queries.length;
        boolean flag = true;
        for(int i : nums){
            if(i > 0){
                flag = false;
                break;
            }
        }
        if(flag)    return 0;
        int l = 0 , h = q-1 , ans = -1;
        while(l <= h){
            int m = l + (h - l)/2;
            if(check(nums , queries , m)){
                ans = m + 1;
                h = m - 1 ;
            }
            else{
                l = m+1;
            }
        }
        return ans;
    }
}