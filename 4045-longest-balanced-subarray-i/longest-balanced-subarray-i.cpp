class Solution {
public:
    int longestBalanced(vector<int>& arr) {
        int maxLen = 0 , n = arr.size() ;
        for(int i = 0 ; i<n ; i++){
            unordered_set<int> even , odd ;
            for(int j = i ; j<n ; j++){
                if(arr[j] & 1)
                    odd.insert(arr[j]);
                else
                    even.insert(arr[j]);

                if(even.size() == odd.size())
                    maxLen = max(maxLen , j-i+1);
            }
            
        }
        return maxLen;
    }
};