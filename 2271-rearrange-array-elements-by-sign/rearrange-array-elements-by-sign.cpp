class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        vector<int> arr1, arr2;
        for (int i : arr) {
            if (i > 0)
                arr1.push_back(i);
            else
                arr2.push_back(i);
        }
        vector<int> result;
        int x = 0, y = 0, n = arr.size();

       for(int i =  0 ; i<arr.size() ; i++){
            if(i%2 == 0){
                arr[i] = arr1[x++];
            }
            else
                arr[i] = arr2[y++] ;
       }
        return arr;
    }
};