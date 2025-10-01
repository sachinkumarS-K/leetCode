class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count = numBottles ;
        while(numBottles >= numExchange){
            int rem = numBottles/numExchange;
            count += rem;
            numBottles %= numExchange;
            numBottles += rem;
        }
        return count;

    }
};