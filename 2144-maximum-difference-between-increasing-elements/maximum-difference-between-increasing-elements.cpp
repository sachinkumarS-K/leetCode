class Solution {
public:
    int maximumDifference(vector<int>& arr) {
        
       int mini = arr[0] ;
       int maxDiff = -1 ;
       for(int i = 1 ; i<arr.size() ; i++){
            if(arr[i] > mini){
                maxDiff = max(maxDiff , arr[i] - mini);
            }
            else{
                mini = arr[i] ; 
            }
       }

       return maxDiff ;

    }
};