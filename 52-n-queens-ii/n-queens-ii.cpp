class Solution {
public:
    int queens[9] ;
    bool check(int row , int col){
        for(int pr = 0 ; pr<row ; pr++){
            int pc = queens[pr];
            if(col == pc || abs(row - pr) == abs(col - pc))
                return 0;
        }
        return 1;
    }
    int rec(int level , int &n){
        if(level == n){
            return 1;
        }
        int ans = 0 ;
        for(int ch = 0 ; ch<n ; ch++){
            if(check(level , ch)){
                queens[level] = ch;
                ans += rec(level +1 , n);
                queens[level] = ch;
            }
        }
        return ans;
    }
    int totalNQueens(int n) {
        memset(queens , -1 , sizeof(queens));
        return rec(0 , n);
    }
};