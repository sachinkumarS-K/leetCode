class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int c = 0 ;
        for(int i = 0 ; i<arr.size() ; i++){
            if(arr[i] == 0){
                int isLeft = (i == 0 || arr[i-1] == 0) ;
                int isRight = (i == arr.size() - 1 || arr[i+1] == 0) ;

                if(isRight && isLeft){
                    arr[i] = 1 ;
                    c++ ;
                }
            }
        }
        return c >= n  ;
    }
};