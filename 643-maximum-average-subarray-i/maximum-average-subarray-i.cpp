class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int maxSum = 0;
        for(int i = 0 ; i<k ; i++)
            maxSum += arr[i];

        int l = 0 , r = k , temp = maxSum;
        while(r < arr.size()){
            temp = temp - arr[l++];
            temp += arr[r++];
            maxSum = max(temp , maxSum);
        }
        return (maxSum) / (k * 1.0) ;
    }
};