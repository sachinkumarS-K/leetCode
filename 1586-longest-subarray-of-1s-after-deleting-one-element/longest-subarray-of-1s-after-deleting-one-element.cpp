class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int n = arr.size() , k = 1;
        int tail = 0 , head = -1 ;
        int noOfZero = 0  , ans = 0;
        while(tail < n){
            while(head + 1 < n && (arr[head+1] == 1 || noOfZero < k)){
                head++;
                if(arr[head] == 0)
                    noOfZero++;
            }
            ans = max(ans , head - tail);
            if(arr[tail] == 0)
                noOfZero--;
            tail++;
        }
        return ans;
    }
};