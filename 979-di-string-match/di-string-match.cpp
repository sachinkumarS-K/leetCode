class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int>ans;
        vector<int>arr;
        for(int i = 0 ; i<=n ; i++)
            arr.push_back(i);
        int l = 0 , h = n;
        for(auto c : s){
            if(c == 'I')
                ans.push_back(arr[l++]);
            else
                ans.push_back(arr[h--]);
        }
        if(l < h)
            ans.push_back(arr[h--]);
        else
            ans.push_back(arr[l++]);
        return ans;
    }
};