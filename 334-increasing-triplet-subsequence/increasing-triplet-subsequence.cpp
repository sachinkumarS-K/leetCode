class Solution {
public:
    
    bool increasingTriplet(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)   return false;
        int a = INT_MAX , b = INT_MAX , c;
        int k = 0;
        while(k < n){
            c = arr[k++];
            if(c <= a)
                a = c;
            else if(c <= b)
                b = c;  
            else
                return true;    
        }
        return false;
    }
};