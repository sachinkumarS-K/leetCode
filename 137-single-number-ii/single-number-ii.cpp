class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int ans = 0  , n = arr.size();
        for(int i = 0 ; i<32 ; i++){
            int sum = 0 ;
            for(int j = 0 ; j<n ; j++)
                sum += (arr[j] >> i) & 1;

            if(sum % 3)
                ans |= (1<<i);
        }        
        return ans;
    }
};