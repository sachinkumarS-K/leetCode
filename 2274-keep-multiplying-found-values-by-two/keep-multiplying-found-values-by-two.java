class Solution {
    public int findFinalValue(int[] nums, int original) {
        HashSet<Integer>st = new HashSet<>();
        for(int i : nums)
            st.add(i);

        while(st.contains(original)){
            original *= 2;
        } 
        return original;
    }
}