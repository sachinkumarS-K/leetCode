class Solution {
public:
    bool check(int a , int b , int c){
            return (a + b > c) && (a + c > b) && (b + c > a);

    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size() , maxPerimeter = INT_MIN;
        for(int i = n-1 ; i>=2 ; i--){
            if(check(nums[i] , nums[i-1] , nums[i-2]))
                return nums[i] + nums[i-1] + nums[i-2];
        }
        return 0;
    }
};