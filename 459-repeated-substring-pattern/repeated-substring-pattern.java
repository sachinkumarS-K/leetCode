class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int start = 0 , end = 1;
        while (end <= s.length() / 2) {
            if (s.length() % end == 0) { 
                String sub = s.substring(0, end);
                StringBuilder repeated = new StringBuilder();
                for (int i = 0; i < s.length() / end; i++) 
                    repeated.append(sub);
                if (repeated.toString().equals(s)) 
                    return true;
            }
            end++;
        }
        return false;
    }
}