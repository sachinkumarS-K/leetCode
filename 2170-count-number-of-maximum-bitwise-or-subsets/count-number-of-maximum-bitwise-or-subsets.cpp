class Solution {
public:
    void rec(int i , int maxOr , vector<int>&arr , int currOr , int &count){
        if(i == arr.size()){
            if(maxOr == currOr)
                count++;
            return;
        }
        rec(i+1 , maxOr , arr , currOr , count);
        rec(i+1 , maxOr , arr , currOr|arr[i] , count);
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int count = 0, maxOr = 0;
        for(int i : nums){
             maxOr |= i;
        }
        rec(0 , maxOr , nums , 0 , count);
        //solve(nums , count , 0 , maxXor , 0);
        return count;
    }
};
