class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxi = -1;
        unordered_map<int,int>freq;

        for(int i : arr)
            freq[i]++;

        for(auto i : freq)
            if(i.first == i.second)
                maxi = max(maxi , i.first);           
        
        return maxi;
    }
};