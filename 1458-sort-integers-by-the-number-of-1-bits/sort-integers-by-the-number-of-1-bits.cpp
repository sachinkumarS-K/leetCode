class compare{
    public:
        bool operator()(auto a , auto b){
            if(a.first == b.first){
                return a.second > b.second;
            }
            return a.first > b.first;
        }
};
class Solution {
public:
    int countBit(int n){
        int c= 0 ;
        while(n){
            n = n & (n-1);
            c++;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
    
        priority_queue<pair<int,int>, vector<pair<int,int>> , compare>pq;
        for(int i : arr){
            pq.push({countBit(i) , i});
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};