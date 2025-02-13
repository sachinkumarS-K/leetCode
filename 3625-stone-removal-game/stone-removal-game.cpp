class Solution {
public:
    bool canAliceWin(int n) {
        int t = n;
        int x = 10;
        bool c = false;
        while(t){
            if(t < x)
                break;
            t = t-x;
            x--;
            c = !c ;
        }
        if (c)
            return true;
        else
            return false;
    }
};