# include <vector>
# include <Stack>
# define INF 65536
class MinStack {
public:
    /** initialize your data structure here. */
    stack <int> s;
    stack <int> mins;
    MinStack() {
    }
    
    void push(int x) {
        s.push(x);
        if(mins.empty() || mins.top() >= x)
        {
            mins.push(x);
        }
    }
    
    void pop() {
        if(s.top() == mins.top())
        {
            mins.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
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