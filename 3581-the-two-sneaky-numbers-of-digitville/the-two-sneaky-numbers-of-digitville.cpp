class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) {
        vector<int>ans;
        int n = arr.size();
        vector<int>hash(n+2, 0);
        for(int i : arr){
            hash[i]++;
            if(hash[i] == 2)
                ans.push_back(i);
        }

        return ans;
    }
};