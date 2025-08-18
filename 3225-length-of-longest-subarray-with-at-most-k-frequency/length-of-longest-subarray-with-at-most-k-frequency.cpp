class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int ans = 0 , n = arr.size() ;
        int head = -1 , tail = 0 ;
        unordered_map<int , int>mp ;
        while(tail < n){
            while(head + 1 < n && mp[arr[head+1]] < k){
                head++ ;
                mp[arr[head]]++;
            }
            ans = max(ans , head - tail + 1);
            if(tail > head){
                tail++; 
                head = tail-1;
            }
            else{
                mp[arr[tail]]--;
                tail++ ;
            }
        }
        return ans;
    }
};