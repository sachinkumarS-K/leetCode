class Solution {
public:
    int maxDistinctElements(vector<int>& arr, int k) {
        int count = 0 ;
        sort(arr.begin() , arr.end());
        int prev = INT_MIN;
        for(int i : arr){
            int l = i - k;
            int h = i + k;
            if(l > prev){
                prev = l ;
                count++;
            }
            else if(h > prev){
                prev++;
                count++;
            }
            // cout<<l<<" "<<h<<" "<<prev<<endl;
        }
        return count;
    }
};