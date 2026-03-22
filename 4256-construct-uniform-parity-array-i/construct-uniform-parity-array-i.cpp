class Solution {
public:
    bool check(vector<int>&arr , bool isEven){
        int n = arr.size();
        if(isEven){
            for(int i = 0 ; i < n ; i++){
                if(arr[i] % 2 == 0) continue ;
                bool flag = false;
                for(int j = 0 ; j < n ; j++){
                    if(i == j) continue;  
                    if((arr[i] - arr[j]) % 2 == 0){
                        flag = true;
                        break;
                    }
                }
                if(!flag) return false;  
            }
        }
        else{
            for(int i = 0 ; i < n ; i++){
                if(arr[i] % 2 != 0) continue ;
                bool flag = false;
                for(int j = 0 ; j < n ; j++){
                    if(i == j) continue;  
                    if((arr[i] - arr[j]) % 2 != 0){
                        flag = true;
                        break;
                    }
                }
                if(!flag) return false;  
            }
        }
        return true;
    }

    bool uniformArray(vector<int>& nums1) {
        return check(nums1 , true) || check(nums1 , false);
    }
};