class MinStack {
    private:
      stack<int> s;
    stack<int> minstack;
    public:
    /** initialize your data structure here. */
    MinStack(): s(), minstack() {}
    void push(int x) {
        s.push(x);
        if(minstack.empty() || x<=minstack.top())
        {
            minstack.push(x);
        }
    }
    
    void pop() {
        if(s.top()== minstack.top())
        {
            minstack.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
      return minstack.top();   
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */