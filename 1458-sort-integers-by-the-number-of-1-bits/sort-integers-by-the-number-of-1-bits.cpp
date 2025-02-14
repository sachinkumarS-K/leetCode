class Solution {
public:
    int countBits(int n) {
        int c = 0;
        while (n) {
            c++;
            n = n & (n - 1);
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int>ans(arr.size());
        for(int i = 0 ; i<arr.size() ; i++)
            ans[i] = countBits(arr[i]);

        for(int i = 0 ; i<arr.size()-1 ; i++){
            for(int j = 0 ; j<arr.size()-i-1 ; j++){
                if(ans[j] > ans[j+1] || (ans[j] == ans[j+1] && arr[j] > arr[j+1])){
                    swap(arr[j], arr[j + 1]);
                    swap(ans[j], ans[j + 1]); 
                }
            }
        }

        return arr;
    }
};