class Solution {
public:
    int helper(int red, int blue, bool flag) {
        int c = 0, i = 1;
        while (true) {
            if (flag) {
                if (blue < i)
                    break;
                blue -= i;
            } else {
                if (red < i)
                    break;
                red -= i;
            }
            i++;
            c++;
            flag = !flag;
        }
        return c;
    }
    int maxHeightOfTriangle(int red, int blue) {

        return max(helper(red, blue, true), helper(red, blue, false));
    }
};