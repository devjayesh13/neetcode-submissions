class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int, int>> sec;
        for(int i=0;i<nums.size();i++){
            sec.push({nums[i], i});
            if(i >= k-1){
                while(!sec.empty() && sec.top().second < i-k+1) sec.pop();
                ans.push_back(sec.top().first);
            }
        }
        return ans;
    }
};
