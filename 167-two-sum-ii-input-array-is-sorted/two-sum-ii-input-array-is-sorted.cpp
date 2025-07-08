class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int l  = 0 , h = n-1 ;
        while(l < h){
            if(arr[l]+arr[h] == target){
                return {l+1, h+1};
            }
            else if(arr[l] + arr[h] > target)
                h--;
            else
                l++;
        }   
        return {};
    }
};