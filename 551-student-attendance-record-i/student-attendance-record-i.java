class Solution {
    public boolean checkRecord(String s) {
        int absent = 0 , late = 0;;
        int count = 0;
        for(int i = 0 ; i<s.length() ; i++){
            char c = s.charAt(i);
            if(c == 'A')
                absent++;
            if(c == 'L')
                late = Math.max(late , ++count);
            else
                count = 0;
        }
        return (absent < 2 && late < 3);
    }
}