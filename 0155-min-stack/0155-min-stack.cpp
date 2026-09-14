class MinStack {
public:
    stack<int> st;
    stack<int> minStack;

    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);

        if(minStack.empty() || value <= minStack.top()) {
            minStack.push(value);
        }
    }
    
    void pop() {
        if(st.top() == minStack.top()) {
            minStack.pop();
        }

        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};