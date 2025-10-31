class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int>ans(arr.size() , 0);
        int p = 0, n = 0 ;
        for(int i : arr){
            if(i > 0){
                ans[2*p] = i;
                p++;
            }
            else{
                ans[2*n+1] = i;
                n++;
            }
        }
        return ans;
    }
};