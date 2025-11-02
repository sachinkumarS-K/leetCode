class Solution {
public:
    void nextSmallerElement(vector<int>& arr, vector<int>& nse) {
        stack<int> stk;
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            while (!stk.empty() && arr[stk.top()] >= arr[i])
                stk.pop();

            if (!stk.empty())
                nse[i] = stk.top();
            stk.push(i);
        }
    }

    void previousSmallerElement(vector<int>& arr, vector<int>& pse) {
        stack<int> stk;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            while (!stk.empty() && arr[stk.top()] >= arr[i])
                stk.pop();
            if (!stk.empty())
                pse[i] = stk.top();

            stk.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n, n), pse(n, -1);
        nextSmallerElement(heights, nse);
        previousSmallerElement(heights, pse);

        int maxArea = INT_MIN;
        for (int i = 0; i < heights.size(); i++)
            maxArea = max(maxArea, (nse[i] - pse[i] - 1) * heights[i]);
        
        return maxArea;
    }
};