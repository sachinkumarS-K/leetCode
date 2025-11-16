class Solution {
    public int[] twoSum(int[] arr, int target) {
        int []ans = new int[2];
        int l = 0 , h = arr.length-1;
        while(l < h){
            int sum = arr[l] + arr[h];
            if(sum == target){
                ans[0] = l+1;
                ans[1] = h+1;
                break;
            }
            else if(sum > target){
                h--;
            }
            else{
                l++;
            }
        }
        return ans;
    }
}