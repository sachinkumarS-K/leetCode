class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>less , equal , greater ;
        for(int  i : nums){
            if(i < pivot)
                less.push_back(i) ;
            else if(i == pivot)
                equal.push_back(i);
            else
                greater.push_back(i) ;
        }
        vector<int> arr ;
        for(int i : less) arr.push_back(i);
        for(int i : equal) arr.push_back(i);
        for(int i : greater) arr.push_back(i);

        return arr ;
    }
};