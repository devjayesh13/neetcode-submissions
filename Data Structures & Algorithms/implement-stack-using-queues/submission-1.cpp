class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    int pop_c = 0, push_c = 0;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        push_c++;
    }
    
    int pop() {
        int s = q1.size() - 1;
        while(s--){
            q2.push(q1.front());
            q1.pop();
        }
        int t = q1.front();
        q1 = q2;
        pop_c++;
        return t;
    }
    
    int top() {
        int s = q1.size() - 1;
        while(s--){
            q2.push(q1.front());
            q1.pop();
        }
        int t = q1.front();
        q1 = q2;
        q1.push(t);
        return t;
    }
    
    bool empty() {
        return pop_c == push_c;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */