class Solution {
public:  
    int minPartitions(string n) {
        int minCount = INT_MIN ;    
        while(n != ""){
            int rem = n.back() - '0' ;
            minCount = max(rem , minCount);
            n.pop_back();
        }
        return minCount;
    }
};