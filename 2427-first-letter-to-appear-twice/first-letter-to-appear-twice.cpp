class Solution {
public:
    char repeatedCharacter(string s) {
    vector<int> arr(26, -1);
        for(auto i : s){
            if(arr[i-'a'] != -1)
                return i;
            else
                arr[i-'a'] = 1;
        }
        return 'a';
    }
};