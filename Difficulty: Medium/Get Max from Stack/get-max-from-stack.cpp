class SpecialStack {
  public:
    stack <int> st;
    stack<int>getmax;
    SpecialStack() {
        // Define Stack
        
    }

    void push(int x) {
        // Push an element into the stack
        st.push(x);
        if(getmax.empty() || x>=getmax.top()){
            getmax.push(x);
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(st.empty()){
            return ;
        }   
        if(st.top() == getmax.top()){
            getmax.pop();
        }
        
        st.pop();
    }

    int peek() {
        // Returns the top element
        if(st.empty()){
            return -1;
        }
        return st.top();
        
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMax() {
        // Return maximum element of Stack
        if(st.empty()){
            return -1;
        }
        return getmax.top();
    }
};