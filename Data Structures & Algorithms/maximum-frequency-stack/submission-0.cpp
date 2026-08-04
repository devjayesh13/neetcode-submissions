class FreqStack {
   public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> g;
    int maxFreq = 0;
    FreqStack() {}

    void push(int val) {
        freq[val]++;
        int curr_freq = freq[val];

        maxFreq = curr_freq > maxFreq ? curr_freq : maxFreq;
        g[curr_freq].push(val);
    }

    int pop() {
        int val = g[maxFreq].top();
        g[maxFreq].pop();

        freq[val]--;
        if(g[maxFreq].empty()) maxFreq--;
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */