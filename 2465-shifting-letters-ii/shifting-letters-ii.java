class Solution {
    public String shiftingLetters(String s, int[][] shifts) {
        int n = s.length();
        int [] arr = new int [n];
        for(int i = 0 ; i<shifts.length ; i++){
            int l = shifts[i][0] , r = shifts[i][1];
            int val = shifts[i][2] == 1 ? 1 : -1 ;
            arr[l] += val;
            if(r+1 < n)
                arr[r+1] -= val;
        }
        for(int i = 1 ; i<n ; i++)
            arr[i] += arr[i-1];

        StringBuilder sb = new StringBuilder(s);

        for (int i = 0; i < n; i++) {
            int t = (s.charAt(i) - 'a' + arr[i]) % 26;
            if (t < 0) t += 26;
            sb.setCharAt(i, (char)('a' + t));   
        }

        return sb.toString();
    }
}