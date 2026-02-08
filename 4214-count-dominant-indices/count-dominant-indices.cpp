class Solution {
public:
    int dominantIndices(vector<int>& arr) {
        int count = 0 , n = arr.size() , sum = 0;
        for(int i : arr)
            sum += i;
        
        int currSum = 0;
        for(int i = 0 ; i < n-1 ; i++){
            currSum += arr[i];
            int rem = sum - currSum;
            if(arr[i] > (rem / (n-i-1)))
                count++;
        }
        return count;
    }
};