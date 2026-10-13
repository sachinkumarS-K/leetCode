class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        unordered_map<int , int> x ;
        for(int  i : arr){
            if(x[i] >=1)
                return true;
            x[i]++;
        }
        return false;
       
    }
};