class Solution {
    public int minimumLength(String s) {
        int[] freq = new int[26];
        for (int i = 0; i < s.length(); i++)
            freq[s.charAt(i) - 'a']++;
        int ans = s.length();
        for (int i = 0; i < s.length(); i++) {
            if (freq[s.charAt(i) - 'a'] >= 3) {
                ans -= 2;
                freq[s.charAt(i) - 'a'] -= 2;
            }
        }
        return ans;
    }
}