class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0, h = arr.size() - 1;
        while ((h - l) >= k) {
            if ((x - arr[l]) <= (arr[h] - x)) {
                h--;
            } else {
                l++;
            }
        }
        return vector<int>(arr.begin()+l,arr.begin()+h+1);
    }
};