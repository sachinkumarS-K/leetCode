class Solution {
public:
    bool isHappy(int n) {
        set<int> st;
        while (n != 1) {
            int s = 0;
            while (n) {
                int t = n % 10;
                s += t * t;
                n /= 10;
            }
            if (st.find(s) != st.end()) {
                return false;
            } else {
                st.insert(s);
                n = s;
            }
        }
        return true;
    }
};