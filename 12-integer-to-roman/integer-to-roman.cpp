class Solution {
public:
    string intToRoman(int num) {
        vector<int>value = {1000 , 900 , 500 , 400 , 100 , 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};
        vector<string>symbol = {"M" , "CM" , "D" , "CD" , "C" , "XC" , "L" , "XL" , "X" , "IX" , "V" , "IV" , "I"};

        string ans = "";

        while(num){
            int i = 0 ;
            while(value[i] > num)   i++ ;

            int times = num / value[i] ;
            num %= value[i];

            int j = 0 ;
            while(j < times)
                ans += symbol[i] , j++ ;
        }
        return ans ;
    }
};