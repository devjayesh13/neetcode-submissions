class Solution {
public:
    vector<int> cur;
    vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++) nums.push_back(i);
        bt(0, nums, k);
        return ans;
    }
    void bt(int i, vector<int>& nums, int k){
        if(cur.size() + (nums.size()-i) < k) return;
        if(cur.size() == k){
            ans.push_back(cur);
            return;
        }

        cur.push_back(nums[i]);
        bt(i+1, nums, k);
        cur.pop_back();
        bt(i+1, nums, k);
    }
};