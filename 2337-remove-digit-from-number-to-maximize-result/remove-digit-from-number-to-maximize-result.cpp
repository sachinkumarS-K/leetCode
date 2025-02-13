class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        for(int i = 0 ; i<number.length();i++){ 
            if(number[i] == digit){
               string t = number;
               t.erase(i,1);

               if(t > ans)
                    ans = t;             
            }
        }
        return ans;
    }
};