class MinStack {
public:
    stack<long> st;
    long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()){
            mini = val;
            st.push(val);
        } else {
            if (val<mini){
                st.push(2LL*val-mini);
                mini = val;
            } else st.push(val);
        }
    }
    
    void pop() {
        if (st.top()<mini) mini = 2*mini - st.top();
        st.pop();
    }
    
    int top() {
        if (st.top()<mini) return mini;
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};