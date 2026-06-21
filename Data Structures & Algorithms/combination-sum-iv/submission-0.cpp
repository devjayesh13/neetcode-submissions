class Solution {
public:
    unordered_map<int, int> memo;
    int combinationSum4(vector<int>& nums, int target) {
        return dp(target, nums);
    }
    int dp(int c, vector<int>& coins){
        if(c == 0) return 1;
        else{
            int ans = 0;
            auto it = memo.find(c);
            if(it != memo.end()) return it->second;
            else{
                for(int co : coins){
                    if(c - co >= 0){
                        int sub = dp(c - co, coins);
                        ans += sub;
                    }
                }
                memo.emplace(c, ans);
            }
            return ans;
        }
    }
};