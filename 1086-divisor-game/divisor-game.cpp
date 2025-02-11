class Solution {
public:
    bool divisorGame(int n) {
        int c = 0;
        while(n){
            int x = -1;
            for(int i = 1 ; i<n ; i++){
                if(n%i == 0)
                    x = i;
                    break;
            }
            if(x != -1){
                n = n-x;
                c++;
            }
            else{
                break;
            }
        }
        if(c%2 != 0)
            return true;
        else
            return false;

    }
};