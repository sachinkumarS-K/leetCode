class Solution {
public:
    int compress(vector<char>& chars) {
         int idx = 0; 
        int i = 0;   
        int n = chars.size();
        while(i < n){
            char curr = chars[i];
            int cnt = 0 ;
            while(i < n && chars[i] == curr)
               cnt++ , i++;

            chars[idx++] = curr;

            if(cnt > 1){
                string str = to_string(cnt);
                for(char c : str)
                    chars[idx++] = c;
            }
        }
        return idx;
    }
};