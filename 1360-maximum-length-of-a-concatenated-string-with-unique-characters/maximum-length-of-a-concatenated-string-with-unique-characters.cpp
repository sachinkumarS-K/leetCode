class Solution {
public: 
    unordered_map<string,int>mp;
    bool isUnique(string str){
        int freq[26] = {0};
        for(char ch : str){
            ch = tolower(ch);
            if(freq[ch - 'a']++) return false;
        }
        return true;
    }
    bool canMerge(string&temp , string &str){
        int freq[26] = {0};

        for(char ch : temp)
            freq[ch - 'a']++;

        for(char ch : str)
            if(freq[ch - 'a']++) return false;

        return true;
    }
    int solve(int idx , string temp , vector<string>&arr ){
        if(idx == arr.size())
            return temp.size();
        if(mp.find(temp) != mp.end())
            return mp[temp];
        
        int inc = 0 ;
        if(isUnique(arr[idx]) && canMerge(temp , arr[idx]))
            inc = solve(idx+1 , temp + arr[idx] , arr);

        int exc = solve(idx+1 , temp , arr );

        return mp[temp] = max(inc , exc);
    }
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        
        return solve(0, "", arr);
    }
};