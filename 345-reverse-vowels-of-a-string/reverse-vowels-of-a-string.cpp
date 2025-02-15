class Solution {
public:
    string reverseVowels(string s) {
        int l = 0 , h = s.length()-1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(l<h){
            while(l<h && vowels.find(s[l]) == vowels.end())
                l++;
            while(l<h && vowels.find(s[h]) == vowels.end())
                h--;          
            
            swap(s[l] , s[h]);
            l++;
            h--;
                          
        }
        return s;
    }
};