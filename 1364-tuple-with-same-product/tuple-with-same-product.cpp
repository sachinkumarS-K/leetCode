class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int>fMap ;
        for(int i = 0 ; i<nums.size() ; i++)
            for(int j = i+1 ; j<nums.size() ; j++)
                fMap[nums[i]*nums[j]]++;
            
        int ans = 0 ;
        for(auto i : fMap)
            if((i.second) > 1)
                ans += (i.second * (i.second - 1) / 2) * 8;          

        return  ans;

    }
};