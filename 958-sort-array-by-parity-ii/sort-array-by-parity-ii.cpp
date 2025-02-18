class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int a = 0 , b = 1;

        vector<int>arr(nums.size() ,0 );
        int i = 0;
        while(a < nums.size() || b < nums.size()){
           if(nums[i] %2 == 0){
                arr[a] = nums[i] ; 
                i++ ;
                a+=2 ;
           }
           else{
                arr[b] = nums[i] ; 
                i++ ;
                b+=2 ;
           }
                
        }
        return arr;
    }
};