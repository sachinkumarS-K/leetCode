class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0 ;
        int i = 0  , n = chars.size();
        

        while(i < n){
            char currChar = chars[i] ;
            int count = 0 ;
            while(i < n && currChar == chars[i])
                count++ , i++;
            chars[idx] = currChar;
            idx++;
            if(count > 1){
                string str = to_string(count);
                for(auto c : str)
                    chars[idx++] = c;
            }
        }
        return idx;
    }
};