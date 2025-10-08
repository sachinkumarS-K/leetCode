class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost = 0 , totalGas = 0 ;
        for(int i = 0 ; i<gas.size() ; i++){
            totalCost += cost[i];
            totalGas += gas[i];
        }
        if(totalGas < totalCost)
            return -1;
        int startIdx = 0 , currGas = 0 ;
        for(int i = 0 ; i<gas.size() ; i++){
            currGas += gas[i] - cost[i];
            if(currGas < 0){
                startIdx = i + 1 ;
                currGas = 0 ;
            }
        }
        return startIdx;
    }
};