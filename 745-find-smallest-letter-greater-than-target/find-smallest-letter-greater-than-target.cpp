class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ch  = letters[0];
        int l = 0 , h = letters.size()-1 ;

        while(l <= h){
            int m = l+(h-l)/2 ;
            if(letters[m] > target){
                ch  = letters[m] ;
                h = m-1 ;
            }
            else{
                l = m+1 ;
            }
        }
        return  ch ;
    }
};