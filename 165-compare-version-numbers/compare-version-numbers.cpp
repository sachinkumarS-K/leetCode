class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        string token = "";
        vector<string> word1;
        while (getline(ss1, token, '.'))
            word1.push_back(token);

        stringstream ss2(version2);
        vector<string> word2;
        token = "";

        while (getline(ss2, token, '.'))
            word2.push_back(token);

        int i = 0 , j = 0 ;
        while(i < word1.size() || j < word2.size()){
            int n1 = 0;
            if(i < word1.size())
                n1 = stoi(word1[i]);
            int n2 = 0 ;
            if(j < word2.size())
                n2 = stoi(word2[i]);
            if(n1 < n2)
                return -1;
            if(n1 > n2)
                return 1;

            i++;
            j++;
        }

        return 0;
    }
};