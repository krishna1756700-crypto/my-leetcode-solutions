class MinStack {
public:
    stack<long long>s;
    long long minval;
  
    MinStack() {
       
    }
    
    void push(long long value) {
        if(s.empty()){
            minval=value;
            s.push(value);
            
            return;
        }
        if(value>=minval)s.push(value);
        else{
            s.push(2*value-minval);
            minval=value;
        }
    }
    
    void pop() {
        if(s.top()<minval)minval=2*minval-s.top();
        s.pop();
    }
    
    int top() {
        if(s.top()<minval)return minval;
        return s.top();
    }
    
    int getMin() {
        if(s.size()==1)return s.top();
        return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */