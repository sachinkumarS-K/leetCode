class Solution {
public:
    int getHcf(int a , int b){
        if(b == 0)
            return a;
        return getHcf(b , a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) 
            return "";
        int g = getHcf(str1.size() , str2.size());
        return str1.substr(0, g);
    }
};
