class Solution {
public:
    bool isValid(string word) {
        if(word.size() < 3)
            return false;

        int check1 = false , check2 = false;
        for(auto i : word){
            if(((i >= 'A' && i<= 'Z') || (i >= 'a' && i <= 'z') || (i >= '0' && i<= '9'))){
                if((i >= 'A' && i<= 'Z') || (i >= 'a' && i <= 'z')){
                    char ch = (char)tolower(i);
                    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                        check1 = true;
                    else
                        check2 = true;
                }
            }
            else{
                return false;
            }
        }
        return check1 && check2;
    }
};