class Solution {
public:
    int minMoves(vector<int>& arr) {
        int maxNum = arr[0];
        for(int i = 1 ; i<arr.size() ; i++)
            maxNum = max(maxNum , arr[i]);
        int minMove = 0;
        for(int i : arr)
            minMove += (maxNum - i);
        
        return minMove;
    }
};