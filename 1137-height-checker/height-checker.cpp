class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr = heights ;
        sort(arr.begin() , arr.end());

        int c = 0 ;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] != heights[i])
                c++ ;
        }
        return c;
    }
};