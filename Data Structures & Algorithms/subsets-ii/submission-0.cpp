class Solution {
public:
    vector<int> cur;
    vector<vector<int>> ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        bt(0, nums);
        return ans;
    }
    void bt(int i, vector<int>& nums){
        if(i == nums.size()){
            if(find(ans.begin(), ans.end(), cur) == ans.end()) {
                ans.push_back(cur);
            }
            return;
        }

        cur.push_back(nums[i]);
        bt(i+1, nums);
        cur.pop_back();
        bt(i+1, nums);
    }
};
