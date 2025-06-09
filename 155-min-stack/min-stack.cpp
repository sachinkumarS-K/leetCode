class MinStack {
public:
    vector<pair<int, int>> stk;
    MinStack() {}

    void push(int val) {
        if (stk.empty()) {
            pair<int, int> p = make_pair(val, val);
            stk.push_back(p);
        } else {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, stk.back().second);
            stk.push_back(p);
        }
    }

    void pop() { stk.pop_back(); }

    int top() { return stk.back().first; }

    int getMin() { return stk.back().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */