class FreqStack {
public:
    unordered_map<int,int> freq; // key: freq, value: count
    unordered_map<int,stack<int>> m; // key: freq, value: stack of elements with that freq 
    int maxfreq=0; // max freq seen so far
    FreqStack() { 
    }
    
    void push(int x) { // add element to stack with freq x
        maxfreq = max(maxfreq, ++freq[x]); // update max freq seen so far
        m[freq[x]].push(x); // add to stack
    }
    
    int pop() { // remove element from stack with max freq
        int x = m[maxfreq].top(); // get element with max freq
        m[maxfreq].pop(); // remove from stack
        if (!m[freq[x]--].size()) maxfreq--; // update max freq if necessary
        return x; // return element
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */