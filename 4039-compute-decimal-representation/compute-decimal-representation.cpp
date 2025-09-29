class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        int i = 0 ;
        while(n){
            int t = (n%10)*pow(10,i);
            if(t != 0)
                ans.push_back(t);
            i++;
            n/=10;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};