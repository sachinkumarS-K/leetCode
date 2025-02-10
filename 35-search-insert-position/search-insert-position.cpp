class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l = 0 , h = arr.size()-1 , ans = -1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(arr[m] == target){
                return m;
            }
            else if(arr[m] < target){
                
                l = m+1;
            }
            else{
                h = m-1;
                ans = m;
            }
        }
        if(ans == -1){
            ans = arr.size();
        }
        return ans;
    }
};