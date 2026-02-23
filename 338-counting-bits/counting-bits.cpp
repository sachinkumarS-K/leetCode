class Solution {
public:
    int count(int n){
        int bits = 0;
        while(n){
            bits++;
            n = n & n-1;
        }

        return bits;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0 ; i<= n ; i++)
            ans.push_back(count(i));
        
        return ans;
    }
};