class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int idx = -1 ,  m = INT_MIN;
        for(int i = 0 ; i<mat.size() ; i++){
            int c = 0;
            for(int j = 0 ; j<mat[0].size() ; j++){
                if(mat[i][j] == 1)
                    c++;
            }
            if(m < c){
                idx = i;
                m = c;
            }
        }
        ans.push_back(idx);
        ans.push_back(m);
        return ans;
    }
};