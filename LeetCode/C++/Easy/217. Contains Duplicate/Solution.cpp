class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        if(arr.size() == 1) return false;
        for(int i = 0 ; i<arr.size() ; i++){
            for(int j = i+1 ; j<arr.size() ; j++){
                if(arr[i] == arr[j])
                    return true;
            }
            
        }
        return false;
    }
};