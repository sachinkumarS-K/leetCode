class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;
        for (int i = 0; i < 9; i++) {

            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                string str1 = "r-";
                str1 += board[i][j];
                str1 += "-";
                str1 += to_string(i);

                if (st.find(str1) != st.end())
                    return false;

                st.insert(str1);

                string str2 = "c-";
                str2 += board[i][j];
                str2 += "-";
                str2 += to_string(j);

                if (st.find(str2) != st.end())
                    return false;

                st.insert(str2);

                string str3 = "b-";
                str3 += board[i][j];
                str3 += '-';
                str3 += to_string(i / 3);
                str3 += to_string(j / 3);

                if (st.find(str3) != st.end())
                    return false;

                st.insert(str3);
            }
        }
        return true;
    }
};