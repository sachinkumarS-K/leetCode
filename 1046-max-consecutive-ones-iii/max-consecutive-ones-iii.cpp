class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
       int ans = 0  , n = arr.size();
       int head = -1 , tail = 0 ;
        int noOfZero = 0 ;
        while(tail < n){
           while(head + 1 < n && (arr[head+1] == 1 || noOfZero < k)){
                head++;
                if(arr[head] == 0)
                    noOfZero++;
            }
            ans = max(ans , head - tail+1);
            if(arr[tail] == 0)
                noOfZero--;

            tail++;
        }

       return ans;
    }
};