class Solution {
public:
    int countCollisions(string directions) {
        int count = 0 , n = directions.size();
        int i = 0 , j = n-1;
        while(directions[i] == 'L')
            i++;
        while( j >= 0 && directions[j] == 'R')
            j--;
        while(i <= j){
            char ch = directions[i];
            if(ch != 'S')
                count++;
            i++;
        }
        return count;
    }
};
