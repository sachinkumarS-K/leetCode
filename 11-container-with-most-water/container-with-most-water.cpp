class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l = 0 , h = height.size()-1;
        while(l < h){
            maxArea = max(maxArea , (h-l)*min(height[l],height[h]));
            height[l] > height[h] ? h-- : l++;
        }
        return maxArea;
    }
};