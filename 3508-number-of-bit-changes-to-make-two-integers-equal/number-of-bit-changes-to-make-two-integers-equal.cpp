class Solution {
public:
    vector<int> binary(int n) {
        vector<int> ans;
        while (n) {
            ans.push_back(n % 2);
            n /= 2;
        }
        return ans;
    }
    int minChanges(int n, int k) {
        int c = 0;
        vector<int> a = binary(n);
        vector<int> b = binary(k);

        int len = max(a.size(), b.size());
        a.resize(len, 0); 
        b.resize(len, 0);

        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 0 && b[i] == 1)
                return -1;
            else if(a[i] == 1 && b[i] == 0)
                c++ ;
        }

        return c;
    }
};