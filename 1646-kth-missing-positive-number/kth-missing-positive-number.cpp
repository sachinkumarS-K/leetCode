class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0 , num = 1;
        int n = arr.size();
        while(k > 0){
            if(i < n && arr[i] == num)
                i++;
            else
                k--;
            if(k == 0)
                return num;
            num++;
        }
        return num;
    }
};