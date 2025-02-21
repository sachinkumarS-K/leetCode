class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s1 = 0 ;
        int s2 = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i] >= 10)
                s2 += nums[i] ;
            else
                s1 += nums[i] ;
        }
        
        return s1 != s2 ;
    }
};