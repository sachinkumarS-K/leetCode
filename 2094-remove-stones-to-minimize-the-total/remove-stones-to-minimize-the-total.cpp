class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<pair<int, int>> pq ;
        for(int i = 0 ; i<piles.size() ; i++){
            pq.push({piles[i] , i});
        }
        while(k > 0 ){
            auto curr = pq.top();
            pq.pop();
            piles[curr.second] -= piles[curr.second] / 2;
            k--;
            pq.push({piles[curr.second] , curr.second});
        }
        int sum = 0 ;
        for(int i : piles)
            sum += i;

        return sum ;
    }
};