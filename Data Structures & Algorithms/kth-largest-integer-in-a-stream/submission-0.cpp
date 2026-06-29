class KthLargest {
private:
    int kl;
    priority_queue<int, vector<int>, greater<int>> heap;
public:
    KthLargest(int k, vector<int>& nums) {
        this->kl = k;
        for(int x : nums){
            heap.push(x);
            if(heap.size() > k) heap.pop();
        }
    }
    
    int add(int val) {
        heap.push(val);
        if(heap.size() > kl) heap.pop();
        return heap.top();
    }
};
