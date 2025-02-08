class Solution {
public:
    void reverse(vector<int > &arr , int l , int h){
        while(l<h ){
            swap(arr[l++] , arr[h--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        // 7 6 5 4 3 2 1 
        // 0 - k-1
        // k - n-1
        k = k%nums.size();
        if(nums.size() == 1) return ;
        reverse(nums , 0 , nums.size()-1);
        reverse(nums , 0 , k-1);
        reverse(nums , k , nums.size()-1);
    }
};