class Solution {
public:
    string addStrings(string num1, string num2) {
       int i = num1.size()-1 , j = num2.size()-1 , c = 0 ;
        string res = "";
       while(i >= 0 || j >= 0 || c){
            int s = c ;
            if(i>= 0) s+= num1[i--]-'0';
            if(j>= 0) s+= num2[j--]-'0';
            res.push_back((s % 10) + '0');;
            c = s/10;
       }
       reverse(res.begin() , res.end());
       return res ;
    }
};