class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
       int res = 0 , l = 0  , n = colors.size();
        vector<int> arr = colors ;
        for(int i  = 0 ; i< k-1 ; i++)
            arr.push_back(colors[i]);
        
        n = arr.size();
        for(int r = 1 ; r<n ; r++){
            if(arr[r] == arr[(r-1)]){
                l = r ;
            }
            if(r-l+1 == k){
                res++ ;
                l++;
            }
       }
       return res;
    }
};
