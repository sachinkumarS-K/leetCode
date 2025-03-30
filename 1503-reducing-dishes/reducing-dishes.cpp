class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        sort(satisfaction.begin() , satisfaction.end());
        int n = satisfaction.size() ;
        vector<int> arr(n);
        arr[n-1] = satisfaction[n-1] ;

        for(int i = n-2 ; i>=0 ; i--)
            arr[i] = arr[i+1] + satisfaction[i] ;
        

        int idx = 0;
        while (idx < n && arr[idx] < 0) 
            idx++;
        
        int ans = 0 ;
        int i = 1 ;
        while(idx < n)
            ans += (i*arr[idx++] );
        

        return ans ;
    }
};