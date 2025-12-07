class Solution {
    public int countOdds(int low, int high) {
        high = high % 2 == 0 ? high-1 : high;
        if(high < low)
            return 0;
        return (high - low) / 2 + 1;
    }
}