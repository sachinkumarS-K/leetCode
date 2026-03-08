class Solution {
    public String findDifferentBinaryString(String[] nums) {
        HashSet<String> set = new HashSet<>(Arrays.asList(nums));
        int n = nums.length;

        char[] ans = new char[n];
        Arrays.fill(ans, '0');

        String res = new String(ans);
        if(!set.contains(res))
            return res;

        while(true){
            int i = n - 1;
            while(i >= 0 && ans[i] == '1'){
                ans[i] = '0';
                i--;
            }

            if(i >= 0)
                ans[i] = '1';

            res = new String(ans);

            if(!set.contains(res))
                return res;
        }
    }
}