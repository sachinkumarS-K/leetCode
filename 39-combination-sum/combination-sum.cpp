class Solution {
public:
    void solve(vector<int>&candidates , int target ,  vector<vector<int>>& ans , vector<int>&arr , int idx){
       if(target == 0){
            ans.push_back(arr);
            return;
       }
       if(target < 0){
            return ;
       }
       for(int i = idx ; i<candidates.size() ; i++){
            arr.push_back(candidates[i]);
            solve(candidates , target - candidates[i] , ans , arr , i);
            arr.pop_back();
       }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>arr ;
        solve(candidates , target , ans , arr , 0);

        return ans;
    }
};