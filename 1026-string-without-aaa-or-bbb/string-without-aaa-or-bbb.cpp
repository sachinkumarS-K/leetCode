class Solution {
public:
    string strWithout3a3b(int a, int b) {
        priority_queue<pair<int, char>> pq;
        if (a > 0)
            pq.push({a, 'a'});
        if (b > 0)
            pq.push({b, 'b'});

        string res = "";
        while (!pq.empty()) {
            int len = res.size();
            auto [c1, ch1] = pq.top();
            pq.pop();
            if (len >= 2 && res[len - 1] == ch1 && res[len - 2] == ch1) {

                if (pq.empty())
                    break;
                auto [c2, ch2] = pq.top();
                pq.pop();
                pq.push({c1, ch1});
                res += ch2;
                if (--c2 > 0)
                    pq.push({c2, ch2});
            } else {
                res += ch1;
                if (--c1 > 0)
                    pq.push({c1, ch1});
            }
        }

        return res;
    }
};