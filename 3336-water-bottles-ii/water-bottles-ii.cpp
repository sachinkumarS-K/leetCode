class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int count =  numBottles;
        int  emptyBottles = count ;
        numBottles = 0;
        while(numBottles >=0 && emptyBottles >= numExchange){
            if(emptyBottles >= numExchange){
                numBottles++;
                emptyBottles -= numExchange;
                numExchange++;           
            }
            
                count += numBottles;
                emptyBottles += numBottles;
                numBottles = 0;
            
        }
        return count;  
    }
};