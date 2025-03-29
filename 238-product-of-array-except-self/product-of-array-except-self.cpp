class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {

        int n = arr.size() , p = arr[0] , q = arr[arr.size()-1] ; 
        vector<int> ans(n) , pre(n) , suff(n) ;
        pre[0] = 1 ;
        suff[n-1] = 1 ;

        for(int i = 1 , j = n-2 ; i < n ; i++ , j--){
            pre[i] = p ;
            p *= arr[i] ;
            suff[j] = q ;
            q *= arr[j] ;
        }
        for(int i = 0 ; i < n ; i++)
            ans[i] = pre[i] * suff[i] ;

        return ans;
    }
};