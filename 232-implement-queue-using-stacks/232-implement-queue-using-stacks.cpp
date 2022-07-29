class MyQueue {
public:
    stack<int> s;
    stack<int> t;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        if(t.empty()){
            while(s.size()){
                t.push(s.top());
                s.pop();
            }
        }
        int x = t.top();
        t.pop();
        return x;
    }
    
    int peek() {
        if(t.empty()){
            while(s.size()){
                t.push(s.top());
                s.pop();
            }
        }
        return t.top();
    }
    
    bool empty() {
        if(s.size()+t.size()==0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */