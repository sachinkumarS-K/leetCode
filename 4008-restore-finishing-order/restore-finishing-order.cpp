class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n=order.size();
        int m=friends.size();
        vector<int>res;
 
        unordered_set<int>st;
        for(int num:friends)
            st.insert(num);
        
        for(int i=0;i<n;i++)
            if(st.find(order[i])!=st.end())
                res.push_back(order[i]);
         
        return res;
 
    }
};