class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minCount = 0;
        
        for(int i =  0 ; i<k ; i++)
            if(blocks[i] == 'W')
                minCount++;
                        
        int c = minCount ;
        for(int i = k ,  j = 0 ; i<blocks.length() ; i++ , j++){
            if(blocks[i] == 'W')
                c++ ;           
            if(blocks[j] == 'W')
                c-- ;
            minCount = min(c , minCount);
        }
        return minCount ;
    }
};