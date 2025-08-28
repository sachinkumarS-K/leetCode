class Solution {
public:
    bool check(string s, string t) {
        return s.find(t) != string::npos; 
    }

    int solve(int i , string word , string str , string temp) {
        if(!check(str , word))  
            return i-1;         
        return solve(i+1 , word+temp , str , temp);
    }

    int maxRepeating(string sequence, string word) {
        if(!check(sequence , word))    return 0;
        return solve(1 , word , sequence , word);
    }
};
