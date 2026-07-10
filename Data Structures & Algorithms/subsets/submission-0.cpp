class Solution {
public:
    vector<int> curr;
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        bt(0, nums);
        return ans;
    }
    void bt(int i, vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        bt(i+1, nums);
        curr.pop_back();

        bt(i+1, nums);
    }
};
