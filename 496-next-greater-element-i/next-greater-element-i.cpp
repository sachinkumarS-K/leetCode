class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i = 0 ; i<nums1.size() ; i++){
            int ele = -1 , isCheck = 0;
            for(int j = 0 ; j<nums2.size() ; j++){
                if(isCheck && nums2[j] > nums1[i]){
                    ans.push_back(nums2[j]);
                    ele = 0;
                    break;
                }
                else if(j<nums2.size() && nums1[i] == nums2[j]){
                    isCheck = 1;
                }
            }
            if(ele == -1)
                ans.push_back(-1);
        }
        return ans;
    }
};