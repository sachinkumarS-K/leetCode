class Solution {
public:
    int reverseDegree(string s) {
        int ans =  0 ;
        for(int i = 0 ; i<s.length() ; i++){
            ans += abs((s[i]-96)-27)*(i+1) ;
        }

        return ans ;
    }
};