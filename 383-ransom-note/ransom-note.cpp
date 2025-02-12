class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> arr(26);
        for (int i = 0; i < magazine.length(); i++)

        arr[magazine[i] - 97]++;
        for (int i = 0; i < ransomNote.length(); i++) {
            if (arr[ransomNote[i] - 97] == 0) {
                return false;
            }
            arr[ransomNote[i] - 97]--;
        }
        return true;
    }
};