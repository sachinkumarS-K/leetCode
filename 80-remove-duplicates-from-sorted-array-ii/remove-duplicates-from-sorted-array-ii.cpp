class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k = 0 ;
        for(int i = 0 ; i<arr.size() ; i++){
            if(k < 2 || arr[i] != arr[k-2])
                arr[k++] = arr[i];
        }

        return k;
    }
};