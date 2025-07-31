class Solution {
public:
    int findMaxK(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        int n = arr.size();
        int l = 0 , h = n-1;
        while(l < h){
            if(arr[h] == -1*arr[l]){
                return arr[h];
            }
            else if(-1*arr[l] < arr[h])
                h--;
            else
                l++;
        }   
        return -1;
    }
};