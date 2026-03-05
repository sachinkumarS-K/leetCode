class Solution {
    int solve(String str , int k){
        int count = 0;    
        for(int i = 0 ; i<str.length() ; i++){
            if(k != str.charAt(i) - '0')
                count++;
            k ^= 1;
        }
        return count;
    }
    public int minOperations(String s) {
        return Math.min(solve(s , 1) , solve(s , 0));   
    }
}