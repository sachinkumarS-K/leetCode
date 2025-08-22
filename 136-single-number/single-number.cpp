class Solution {
public:
    int singleNumber(vector<int>& arr) {
       int ans = 0 ;
       for(int i = 0 ; i<32 ; i++){
            int sum = 0 ;
            for(int j = 0 ; j<arr.size() ; j++){
                sum += (arr[j] >> i) & 1;
            }
            if(sum % 2)
                ans |= (1<<i);
       }
       return ans;
    }
};