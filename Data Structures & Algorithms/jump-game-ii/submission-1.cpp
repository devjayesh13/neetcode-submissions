class Solution {
public:
    map<int, int> memo;
    int jump(vector<int>& nums) {
        return dp(0, nums);
    }
    int dp(int pos, vector<int> &nums){
        if(pos >= nums.size()-1) return 0;
        auto it = memo.find(pos);
        if(it != memo.end()) return it->second;
        else{
            int ans = INT_MAX;
            for(int j = 1;j<nums[pos]+1;j++){
                int sub = dp(pos+j, nums);
                if(pos + j < nums.size() && sub != INT_MAX) ans = min(ans, 1+sub);
            }
            memo[pos] = ans;
            return ans;
        }
    }
};
