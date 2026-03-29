class Solution {
public:
    vector<int> leftRightDifference(vector<int>& arr) {
        int sum = 0 ;
        for(int i : arr)
            sum += i ;

        vector<int>ans;
        int l = 0 , r = sum - arr[0] ;
        for(int i = 0 ; i<arr.size() ; i++){
            ans.push_back(abs(r-l));
            l += arr[i] ;
            if(i+1 != arr.size())
                r -= arr[i+1];
            else
                r = 0;
        }   

        return ans;
    }
};