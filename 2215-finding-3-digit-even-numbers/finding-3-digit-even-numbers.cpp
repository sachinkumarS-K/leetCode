class Solution {
public:
    void getDigit(int num , vector<int>&arr){
        while(num){
            arr.push_back(num % 10);
            num /= 10;
        }
        reverse(arr.begin() , arr.end());
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int>freq ;
        for(int i  : digits)
            freq[i]++;
        vector<int>ans;
        for(int i = 100 ; i<999 ; i+=2){
            vector<int>arr;
            getDigit(i , arr);
            unordered_map<int,int>temp = freq ;
            bool flag = true;
            for(int j : arr){
                
                if(temp[j] == 0){
                    flag = false;
                    break;
                }
                else
                    temp[j]-- ;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};