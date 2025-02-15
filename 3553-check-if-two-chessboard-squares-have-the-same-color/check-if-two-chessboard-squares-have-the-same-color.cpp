class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int a = (coordinate1[0]-96) + (coordinate1[1] - 48);
        int b = (coordinate2[0]-96) + (coordinate2[1] - 48);
              
        if((a+b)%2 == 0)
            return true;
        else
            return false;
    }
};