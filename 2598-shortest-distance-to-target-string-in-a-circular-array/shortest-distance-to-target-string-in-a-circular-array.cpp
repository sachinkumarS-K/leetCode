class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();

        for(int i = 0; i < n; i++){
            if(words[i] == target){
                int diff = abs(i - startIndex);
                int dist = min(diff, n - diff); 
                ans = min(ans, dist);
            }
        }

        return (ans == INT_MAX ? -1 : ans);
    }
};