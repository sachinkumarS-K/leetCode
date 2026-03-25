class Solution {
public:
    string smallestSubsequence(string s) {
        string ans = "";

        vector<int>occ(26 , 0);
        vector<bool>vis(26,false);

        for(int i = 0 ; i<s.size() ; i++)
            occ[s[i] - 'a'] = i ;

        for(int i = 0 ; i<s.size() ; i++){
            char ch = s[i] ;
            if(vis[ch-'a']) continue;

            while(ans.size() && ans.back() > ch && occ[ans.back()-'a'] > i){
                vis[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans += ch;
            vis[ch-'a'] = true;
        }
        return ans;
    }
};