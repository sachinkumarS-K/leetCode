class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s ;
        vector<string> zigZag(numRows);
        bool direction = 1 ;
        int row = 0 , i = 0 ;
        while(1){
           if(direction){
            while(row < numRows && i < s.size()){
                zigZag[row++].push_back(s[i++]);
            }
            row = numRows - 2 ;
           }
           else{
            while(row >= 0 && i< s.size()){
                zigZag[row--].push_back(s[i++]);
            }
            row = 1 ;
           }
           if(i >= s.size())
                break ;

            direction = !direction ;
        }
        string ans  ;
        for(int i = 0 ; i<zigZag.size() ; i++)
            ans += zigZag[i] ;

        return ans;
    }
    
};