class Solution {
    public int smallestRepunitDivByK(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1; 
        
        HashMap<Integer,Integer> mp = new HashMap<>();

        int num = 1;
        int len = 1;   
        int rem = num % k;

        while(!mp.containsKey(rem)){
            if(rem == 0)
                return len;           
            len++;
            mp.put(rem, 1);
            num = (num * 10 + 1) % k;
            rem = num;
        }
        return -1;
    }
}