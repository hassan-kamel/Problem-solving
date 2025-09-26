class MinStack {
    vector<pair<int, int>> v;

public:
    MinStack() {}

    void push(int val) {
        int currMinV = !v.size() ? val : min(v.back().second, val);
        v.push_back({val, currMinV});
    }

    void pop() { v.pop_back(); }

    int top() { return v.back().first; }

    int getMin() { return v.back().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */