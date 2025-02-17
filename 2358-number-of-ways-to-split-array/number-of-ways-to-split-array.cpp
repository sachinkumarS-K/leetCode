class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        long long int l = 0  ,r = 0  ,c = 0;
        long long int s = 0 ;
        for(auto i : nums)
            s += i;

        for(int i = 0 ; i<nums.size()-1 ; i++){
            l += nums[i] ;
            r = s-l ;
            if(l >= r)
                c++ ;
        }
        return c;
    }
};