class Solution {
    public boolean hasAlternatingBits(int n) {
        long ans = n ^ (n >>1);
        return (ans & (ans + 1)) == 0;   
    }
}