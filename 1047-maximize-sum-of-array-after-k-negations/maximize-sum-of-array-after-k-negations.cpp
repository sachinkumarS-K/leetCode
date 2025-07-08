class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>>pq(nums.begin() , nums.end());
        int sum = 0 ;
        for(int i : nums)
            sum += i;

       while(k--){
            int top = pq.top();
            pq.pop();
            pq.push(-top);
            sum -= top;
            sum += (-top);
       }  
       return sum ;
    }
};