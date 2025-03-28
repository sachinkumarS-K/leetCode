class Solution {
public:
    bool isPalindrome(vector<int>arr){
        int l = 0 , h = arr.size()-1 ;
        while(l<=h){
            if(arr[l++] != arr[h--])
                return false ;
        }
        return true ;
    }
    vector<int> binary(int n , int b){
        vector<int>arr ;
        while(n){
            arr.push_back(n%b);
            n/=b;
        }
        reverse(arr.begin() , arr.end());
        return arr ;
    }
    bool isStrictlyPalindromic(int n) {
        vector<int> arr ;
        for(int i = 2 ; i<=n-2 ; i++){
            arr = binary(n , i);
            if(!isPalindrome(arr))
                return false ;
        }
        return true ;
    }
};