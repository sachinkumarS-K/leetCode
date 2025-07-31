class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> distinct;
        for (int num : nums) {
            if (num != 0)
                distinct.insert(num);
        }
        if(distinct.size() == 0)
            return 0 ;
        vector<int>arr;
        for(auto it : distinct)
            arr.push_back(it);
        sort(arr.begin() , arr.end());

        int x = arr[0]  , count = 1;
        for(int i = 1 ; i<arr.size() ; i++){
            x += arr[i]-x;
            count++;
        }
        return count;
    }
};