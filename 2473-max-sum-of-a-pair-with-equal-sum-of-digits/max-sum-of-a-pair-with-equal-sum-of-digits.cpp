class Solution {
public:
    int digitSum(int n) {
        int s = 0;
        while (n) {
            s += n % 10;
            n /= 10;
        }
        return s;
    }
    int maximumSum(vector<int>& nums) {
        //int n = nums.size();
        //vector<int> arr(nums.size());
        // int m = -1, x = -1, y = -1;
        //  for (int i = 0; i < nums.size(); i++) {
        //      arr[i] = digitSum(nums[i]);
        //      if (m < arr[i]) {
        //          m = arr[i];
        //          x = i;
        //      } else if (m == arr[i]) {
        //          y = i;
        //      }
        //  }
        //  int maxSum = -1;
        //  for (int i = 0; i < n; i++){
        //       for (int j = i + 1; j < n; j++){
        //            if(arr[i] == arr[j]){
        //                if((nums[i] + nums[j]) > maxSum ){
        //                         maxSum = nums[i] + nums[j];
        //                 }
        //            }
        //         }
        // }
        int maxSum = -1;
        unordered_map<int, int> maxMap;
        
        for (int num : nums) {
            int dSum = digitSum(num);
            if (maxMap.count(dSum)) {
                maxSum = max(maxSum, maxMap[dSum] + num);
            }
            maxMap[dSum] = max(maxMap[dSum], num);
        }

        return maxSum;
    }
};