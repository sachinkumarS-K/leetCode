class Solution {
    public int numSub(String s) {
        long count = 0, c = 0;
        int n = s.length();
        for(int i = 0 ; i<n ; i++){
            if(s.charAt(i) == '1'){
                c++;
            }
            else if(s.charAt(i) == '0'){
                count += (c * (c + 1)) / 2;
                c = 0;
            }
        }
        count += (c * (c + 1)) / 2;
        return (int)(count % 1000000007);
    }
}