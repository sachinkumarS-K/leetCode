class Solution {
public:
    string frequencySort(string s) {
        string ans = "";

        priority_queue<pair<int , char>>pq ;
        unordered_map<char , int>freq;
        for(auto i : s)
            freq[i]++ ;
        
        for(auto i : freq){
            pq.push({i.second , i.first});
        }
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            for(int i = 0 ; i< curr.first ; i++)
                ans += curr.second;
        }


        return ans;
    }
};