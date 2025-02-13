class Solution {
public:
    bool canAliceWin(int n) {    
        int x = 10;
        bool c = false;
        while(n){
            if(n < x)
                break;
            n = n-x;
            x--;
            c = !c ;
        }
        if (c)
            return true;
        else
            return false;
    }
};