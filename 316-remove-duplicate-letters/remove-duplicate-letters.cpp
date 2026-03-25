class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans ;
        vector<int>occ(26,0);
        for(int i = 0 ; i<s.size() ; i++)
            occ[s[i]-'a'] = i ;
        
        stack<char>stk;
        vector<bool>visited(26,false);
       for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(visited[ch-'a']) continue;
            while(!stk.empty() && stk.top() > ch && occ[stk.top()-'a'] > i){                
                visited[stk.top()-'a'] = false;
                stk.pop();
            }
            stk.push(ch);
            visited[ch-'a'] = true;
        }
        while(!stk.empty()){
            ans += stk.top();
            stk.pop();
        }   
        reverse(ans.begin() , ans.end());    
        return ans;
    }
};