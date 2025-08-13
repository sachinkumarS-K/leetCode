class Solution {
public:
    int maxPower(string s) {
        int count = 0 ;
        int head = 0 , tail = 0 ;
        while(head < s.size()){
            int c = 0 ;
            while(head + 1 < s.size() && s[head+1] == s[head]){
                c++ ;
                head++;
            }
            count = max(count , c);
            head++;
        }
        return count+1;
    }
};