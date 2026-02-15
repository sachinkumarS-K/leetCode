class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>freq , freqCount;

        for(int i : nums)
            freq[i]++;
        
        for(auto it : freq)
            freqCount[it.second]++;
        
        int ans = -1;
        for(auto i : nums){
            if(freqCount[freq[i]] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};