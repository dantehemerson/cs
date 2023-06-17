class MinStack {
    vector<pair<int, int>> stack;
public:
    MinStack() {
    }

    void push(int val) {
        int newMin = val;
        if(stack.size() > 0 && this->getMin() < val)
            newMin = this->getMin();

        stack.emplace_back(val, newMin);
    }

    void pop() {
        stack.pop_back();
    }

    int top() {
       return stack.back().first;
    }

    int getMin() {
        return stack.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 *
