class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string> st(nums.begin(), nums.end());
        int n = nums.size();
        string ans(n, '0');

        if(!st.count(ans))
            return ans;

        while(true){
            int i = n - 1;
            while(i >= 0 && ans[i] == '1'){
                ans[i] = '0';
                i--;
            }
            if(i >= 0)
                ans[i] = '1';
            if(!st.count(ans))
                return ans;
        }

        return ans;
    }
};