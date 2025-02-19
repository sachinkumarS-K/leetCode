class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        if (arr.size() == 1)
            return true;

        bool isInc = false , isDec = false ;

        for(int i = 1 ; i<arr.size() ; i++){
            if(arr[i] > arr[i-1])
                isInc = true ;
            else if(arr[i] < arr[i-1])
                isDec = true;
            
            if(isInc && isDec)
                return false;
        }

        return true ;
    }
};