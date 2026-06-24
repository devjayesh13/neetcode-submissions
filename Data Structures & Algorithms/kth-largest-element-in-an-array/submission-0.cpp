class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
        int ans = INT_MAX, x = k-1;
        for(int i=0;i<nums.size();i++){
            heap.push(nums[i]);
        }
        while(x--){
            heap.pop();
        }
        return heap.top();
    }
};
