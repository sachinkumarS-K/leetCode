class Solution {
public:
    int digitSum(int n){
        int s = 0;
        while(n){
            s += n % 10;
            n/=10;
        }
        return s ;
    }
    int minElement(vector<int>& arr) {
        for(int i = 0 ; i<arr.size() ; i++)
            arr[i] = digitSum(arr[i]);
        
        int m = INT_MAX;

        for(int i : arr)
            m = min(i,m);

        return m;
    }
};