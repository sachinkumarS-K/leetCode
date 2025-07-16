class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int c = nums[0] % 2;
        int odd = 0, even = 0, both = 0;
        for(int num : nums){
            if(num % 2 == 0)
                even++;
            else
                odd++;
            
            if(num % 2 == c){
                both++;
                c = 1 - c;
            }
        }
        return max(both, max(even, odd));
    }
};