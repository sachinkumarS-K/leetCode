class Solution {
public:
    bool check(string s){
        int hash[26] = {0};
        for(auto i : s){
            if(hash[i-'a'] > 0)
                return true;
            hash[i-'a']++;
        }
        return false;
    }
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size())
            return false;
        if(s == goal)
            return check(s);
        vector<int>arr;
        int i = 0 ;
        while(i<s.size()){
            if(s[i] != goal[i])
                arr.push_back(i);
            i++;
        }
        if(arr.size() == 2){
            swap(s[arr[0]] , s[arr[1]]);
            return s == goal;
        }
        else
            return false; 
    }
};