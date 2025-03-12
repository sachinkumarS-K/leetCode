class Solution {
public:
   int maximumCount(vector<int>& nums) {
        int l = 0 , h = nums.size()-1 , m ;
        int pos = -1  ,neg = -1;
        while (l <= h){
                m = l + (h - l) / 2;
                if (nums[m] > 0)
                        pos = m , h = m - 1;
                else
                        l = m + 1;               
        }
        l = 0, h = nums.size() - 1, m;

        while (l <= h){
                m = l + (h - l) / 2;
                if (nums[m] < 0)
                        neg = m,l = m + 1;               
                else
                    h = m - 1;                
        }
        if(neg == -1 && pos == -1)
                return 0;
        else if(pos == -1)
                return neg + 1;
        else
                return (neg + 1 > (nums.size() - pos)) ? neg + 1 : nums.size() - pos;
}
};