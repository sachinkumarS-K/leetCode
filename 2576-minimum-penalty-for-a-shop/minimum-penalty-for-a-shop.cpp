class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size() ;
        vector<int> suff(n+1) , pre(n+1) ;
        pre[0] = 0 ;
        int c = 0 ;
        for(int i = 0 ; i < n ; i++){                  
            pre[i+1] = pre[i] + (customers[i] == 'N' ? 1 : 0 ) ;
        }
        suff[n] = 0 ;
        for(int i = n-1 ; i>=0 ; i--){
            suff[i] = suff[i+1] + (customers[i] == 'Y' ? 1 : 0 ) ;
        }

        int ans = INT_MAX , idx = -1 ;
        
        for(int i = 0 ; i<=n ; i++){
             pre[i] += suff[i] ;
             if(ans > pre[i]){
                ans = pre[i] ;
                idx = i ;
            }
        }

        return idx ;
           
    } 
};