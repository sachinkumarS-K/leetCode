class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {

        for (int i = 0; i < score.size(); i++) {
            int maxi = score[i][k], idx = i;
            for (int j = i + 1; j < score.size(); j++) {
                 if (score[j][k] > maxi) {
                    maxi = score[j][k];
                    idx = j;
                }
            }           
            if (idx != i) 
                swap(score[i], score[idx]);       
        }

        return score;
    }
};