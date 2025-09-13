class Solution {
public:
    bool check(char ch){
        return (ch == 'e' || ch == 'a' || ch == 'i' || ch == 'o' || ch =='u');
    }
    int maxFreqSum(string s) {
        int arr[26] = {0};
        for(int i = 0 ; i <s.size() ; i++){
            arr[s[i]-'a']++;
        }
        int maxi = 0;
        int a = INT_MIN , b = INT_MIN;
        for(int i = 0 ; i<26 ; i++){
            if(arr[i] > 0 && check((char)i+'a')){
                a = max(a , arr[i]);
            }
            else if(arr[i] > 0 && !check((char)i+'a')){
                b = max(b , arr[i]);
            }
        }
        if(b != INT_MIN)
            maxi += b;
        if(a != INT_MIN)    
            maxi += a;

        return maxi;
    }
};