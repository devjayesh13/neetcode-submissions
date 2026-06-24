class Solution {
public:
    map<int, int> memo;
    int lengthOfLIS(vector<int>& nums) {
        int ans = 1;
        for(int i = 0;i<nums.size()-1;i++) ans = max(ans,dp(i, nums));
        return ans;
    }
    int dp(int i, vector<int> &nums){
        if(i == nums.size() - 1)return 1;
        else{
            auto it = memo.find(i);
            if(it != memo.end()) return it->second;
            int ans = 1;
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] > nums[i]) ans = max(ans, 1 + dp(j, nums));
            }
            return memo[i] = ans;
        }
    }
};
