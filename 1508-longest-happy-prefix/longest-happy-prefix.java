class Solution {
    public String longestPrefix(String s) {
        int n = s.length();
        int [] lps = new int [n];
        int i = 1 , len = 0 ;
        while(i < n){
            if(s.charAt(i) == s.charAt(len)){
                lps[i] = ++len;
                i++;
            }
            else{
                if(len != 0)
                    len = lps[len-1];
                else
                    i++;                
            }
        }
        return s.substring(0 , lps[n-1]);
    }
}