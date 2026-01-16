class Solution {
public:
    int findMaxConscutive(vector<int>arr){
        int maxi = 1;
        int curr = 1;
        for(int i = 1 ; i<arr.size() ; i++){
            if(arr[i] - arr[i-1] == 1){
                curr++;
                maxi = max(maxi , curr);
            }
            else{
                curr = 1;
            }
        }
        return maxi;
    }
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin() , hBars.end());
        sort(vBars.begin() , vBars.end());
        
        int maxWidth = findMaxConscutive(hBars);
        int maxHeight = findMaxConscutive(vBars);

        int area = min(maxWidth , maxHeight)+1;

        return area*area;;
    }
};