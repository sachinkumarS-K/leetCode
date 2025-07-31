class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>ans;
        unordered_set<int>prev ;
        for(int i : arr){
            unordered_set<int>curr ;
            curr.insert(i);
            for(auto x : prev)
                curr.insert(i | x);

            prev = curr;
            for(auto x : curr)
                ans.insert(x);
        }
        return ans.size();
    }
};