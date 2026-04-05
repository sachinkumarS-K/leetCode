class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int s = 0 , cnt = 0 ;
        for(int i = 0 ; i <moves.length() ; i++){
            char ch = moves.charAt(i) ;
            if(ch == '_')
                s++;
            else if(ch == 'L')
                cnt--;
            else 
                cnt++;
        }
        return (s + Math.abs(cnt));
    }
}