class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int l = 0 , h = nums.size()-1 ;
        sort(nums.begin() , nums.end());
        int count = 0 ;
        while(l < h){
            int sum = nums[l] + nums[h] ;
            if(sum == k){
                count++;
                l++ , h-- ;
            }
            else if(sum > k){
                h--;
            }
            else{
                l++;
            }
        }
        return count;
    }
};