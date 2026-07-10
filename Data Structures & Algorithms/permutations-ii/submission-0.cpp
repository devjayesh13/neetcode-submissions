class Solution {
public:
    vector<vector<int>> ans;
    vector<int> cur;
    vector<bool> used;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        used.assign(nums.size(), false);
        bt(nums);
        return ans;
    }
    void bt(vector<int>& nums){
        if(nums.size() == cur.size()){
            if(find(ans.begin(), ans.end(), cur) == ans.end()){
                ans.push_back(cur);
            }
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;

            used[i] = true;
            cur.push_back(nums[i]);
            bt(nums);
            cur.pop_back();
            used[i] = false;
        }
    }
};