class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq ;
        for(int i : gifts)
            pq.push(i);
        for(int i = 0 ; i<k ; i++){
            int lar = sqrt(pq.top());
            pq.pop();
            pq.push(lar);
        }
        long long sum = 0;
        while(!pq.empty()){
            sum += pq.top();
            pq.pop();
        }
        return sum ;
    }
};