class Solution {
public:
    int count(int a , int b){
        if(a == 0 || b == 0)
            return 0 ;

        return 1 + (a >= b ? count(a-b , b) : count(a , b-a));
    }
    int countOperations(int num1, int num2) {
        
        return count(num1 , num2);
    }
};