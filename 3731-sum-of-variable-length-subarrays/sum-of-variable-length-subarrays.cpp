class Solution {
public:
    int subarraySum(vector<int>& nums) {
         int n = nums.size();
        vector<int> pre(n , 0);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++) 
            pre[i] = pre[i-1] + nums[i];


       int total = 0;
        for (int i = 0; i < n; i++) {        
            int start = max(0, i - nums[i]);
            if(start == 0)
                total += pre[i];
            else
                total += (pre[i] - pre[start-1]);
        }
        return total;
    }
};