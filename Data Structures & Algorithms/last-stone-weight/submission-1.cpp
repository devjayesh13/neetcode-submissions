class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(int i=0;i<stones.size();i++) heap.push(stones[i]);
        while(heap.size() > 1){
            int x = heap.top();
            heap.pop();
            int y = heap.top();
            heap.pop();
            if(x < y) heap.push(y-x);
            else if(x > y) heap.push(x-y);
            else heap.push(0);
        }
        return heap.top();
    }
};
