class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        int count = 0 , n = arr.size();
        sort(arr.begin() , arr.end());

        for(int i = 1 ; i<n ; i++){
            if(arr[i] <= arr[i-1]){           
                count += arr[i-1] - arr[i] + 1;
                arr[i] = arr[i-1] + 1;
            }
        }
        return count;
    }
};