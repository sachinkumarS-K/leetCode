class Solution {
    public long largestSquareArea(int[][] bottomLeft, int[][] topRight) {
        int n = bottomLeft.length;
        int maxSide = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int topX = Math.min(topRight[i][0], topRight[j][0]);
                int bottomX = Math.max(bottomLeft[i][0], bottomLeft[j][0]);
                int width = topX - bottomX;

                int topY = Math.min(topRight[i][1], topRight[j][1]);
                int bottomY = Math.max(bottomLeft[i][1], bottomLeft[j][1]);
                int height = topY - bottomY;

                int side = Math.min(width, height);
                maxSide = Math.max(maxSide, side);
            }
        }
        return 1L * maxSide * maxSide;
    }
}