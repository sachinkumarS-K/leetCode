class Solution {
public:
    int countDigits(int n){
        int c  = 0;
        while(n){
            c++;
            n/=10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int c = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(countDigits(nums[i]) % 2 == 0)
                c++;
        }
        return c;
    }
};