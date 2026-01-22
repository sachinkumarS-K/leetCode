class Solution {
public:
    bool check(vector<int>&arr){
        for(int i = 1 ; i<arr.size() ; i++){
            if(arr[i] < arr[i-1])
                return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int opr = 0 ;
        while(!check(nums)){
             pair<int,int> minPair = {INT_MAX, -1};
            for(int i = 0 ; i<nums.size()-1; i++){
                int sum = nums[i] + nums[i+1];
                if(sum < minPair.first){
                    minPair.first = sum;
                    minPair.second = i;
                }
            }
            nums[minPair.second] = minPair.first;
            nums.erase(nums.begin()+minPair.second+1);
            opr++;
        }


        return opr;
    }
};