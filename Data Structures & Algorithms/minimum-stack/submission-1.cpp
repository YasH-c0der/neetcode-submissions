class MinStack {
   public:
    stack<int> st;
    vector<int> prefix;
    MinStack() {
        
    }

    void push(int val) {
        st.push(val);
        int n = prefix.size();
        if (n == 0)
            prefix.push_back(val);
        else if (prefix[n - 1] > val)
            prefix.push_back(val);
        else
            prefix.push_back(prefix[n - 1]);
    }

    void pop() {
        st.pop();
        prefix.pop_back();
    }

    int top() { return st.top(); }

    int getMin() { return prefix[prefix.size() - 1]; }
};
