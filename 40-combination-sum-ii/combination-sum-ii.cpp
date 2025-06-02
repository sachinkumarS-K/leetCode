class Solution {
public:
    void solve(vector<vector<int>>& ans, int target, vector<int>& candidates,
               vector<int> arr, int idx) {
        if (target == 0) {
            ans.push_back(arr);
            return;
        }
        if (target < 0)
            return;

        
        for(int i = idx ; i<candidates.size() ; i++){
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;
            arr.push_back(candidates[i]);
            solve(ans , target - candidates[i] , candidates , arr , i+1);
            arr.pop_back();
       }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin() , candidates.end());
        vector<vector<int>> ans;
        vector<int> arr;
        solve(ans , target, candidates, arr, 0);
        // unordered_set<vector<int>>st;
        // for(auto e : ans)
        //     st.insert(e);

        // ans.clear();
        // for(auto i : st)
        //     ans.push_back(i);

        return ans;
    }
};