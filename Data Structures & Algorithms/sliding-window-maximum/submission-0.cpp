class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<int> sec;
        int l = 0, r = l+k;
        while(r < nums.size()+1){
            for(int i=l;i<r;i++) sec.push(nums[i]);
            ans.push_back(sec.top());
            sec = priority_queue<int>();
            l++;
            r++;
        }
        return ans;
    }
};
