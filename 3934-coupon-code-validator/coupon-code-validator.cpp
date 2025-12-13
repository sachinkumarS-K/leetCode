class Solution {
public:
    bool isValid(string str){
        if(str.empty())
            return false;
        for(char ch : str){
            if(!isalnum(ch) && ch != '_')
                return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string,int>mp = {
            {"electronics",0},
            {"grocery" , 1},
            {"pharmacy" , 2},
            {"restaurant" , 3}
        };
        vector<pair<int,string>>arr;
        for(int i = 0 ; i<code.size();i++){
            if(isActive[i] && mp.count(businessLine[i]) && isValid(code[i]))
                arr.push_back({mp[businessLine[i]] , code[i]});
        }
        sort(arr.begin(),arr.end());
        
        vector<string>ans;
        for(auto it : arr)
            ans.push_back(it.second);

        return ans;
    }
};