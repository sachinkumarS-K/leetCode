class Solution {
public:
    int minimumSum(int num) {
        vector<int>arr;
        while(num){
            arr.push_back(num % 10);
            num /= 10;
        }
        sort(arr.begin() , arr.end());
        int a = 0 , b = 0 ;
        a = a * 10 + arr[0];
        a = a * 10 + arr[3];

        b = b * 10 + arr[1];
        b = b * 10 + arr[2];

        return a + b;
    }
};