class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size() ;
        vector<int> mul(n);
        mul[0] = arr[0];
        for(int i = 1 ; i<n ; i++){
            mul[i] = mul[i-1]*arr[i];
        }
        int pd = 1;
        for(int i = n-1 ; i>0 ; i--){
            mul[i] = mul[i-1]*pd;
            pd *= arr[i];
        }
        mul[0] = pd;

        return mul;
    }
};