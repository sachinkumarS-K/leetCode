class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
       
    unordered_map<int , int> m ;

    for(int i = 0 ; i<arr.size() ; i++){
        int x = target - arr[i] ;
        if(m.count(x)){
            return {i , m[x]};
        }
        m[arr[i]] = i ;
    }
    return {};
    }
};