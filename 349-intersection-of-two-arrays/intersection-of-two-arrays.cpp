class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(),n2= nums2.size();
        int i = 0 , j = 0 , pre = -1;
        vector<int>ans;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        while(i<n1 && j<n2){
            if(nums1[i] == nums2[j]){
                if(pre == nums1[i]){
                    i++ , j++ ;
                    continue;
                }
                ans.push_back(nums1[i]);
                pre = nums1[i];
                i++ , j++ ;
                
            }
            else if(nums1[i] > nums2[j]){
                j++ ;
            }
            else {
                i++;
            }
        }
       return ans;
    }
};