class Solution {
public:
    int minimumDistance(vector<int>& arr) {
        int n = arr.size();
        if(n < 3)   return -1;

        int minDis = INT_MAX ;

        for(int i = 0 ; i<n ; i++){
            for(int j = i+1 ; j< n ; j++){
                for(int k = j+1 ; k<n  ;k++){
                    if(arr[i] == arr[j] && arr[j] == arr[k]){
                        int dis = abs(i-j)+abs(j-k)+abs(k-i);
                        minDis = min(minDis , dis);
                    }
                }
            }
        }

        return minDis == INT_MAX ? -1 : minDis;;
    }
};