class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> arr;
        for (auto str : bank) {
            int cnt = 0;
            for (auto c : str)
                if (c == '1')
                    cnt++;
            arr.push_back(cnt);
        }

        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0)
                continue;

            int j = i+1 ;
            while(j < arr.size() && arr[j] == 0)
                j++ ;
            if(j < arr.size())
                ans += (arr[j] * arr[i]);
        }

        return ans;
    }
};