class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int c = 0;
        while(a){
            c++;
            a = a&(a-1);
        }
        return c;
    }
};