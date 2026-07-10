class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        bt(0, nums, target);
        return ans;
    }
    void bt(int i, vector<int>& nums, int tar){
        if(tar == 0){
            ans.push_back(curr);
            return;
        }
        if(tar < 0 || i >= nums.size()) return;

        curr.push_back(nums[i]);
        bt(i, nums, tar - nums[i]);
        curr.pop_back();
        bt(i+1, nums, tar);
    }
};
