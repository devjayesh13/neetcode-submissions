class Solution {
public:
    unordered_map<int, int> memo;
    int coinChange(vector<int>& coins, int amount) {
        if(dp(amount, coins) == INT_MAX) return -1;
        else return dp(amount, coins); 
    }
    int dp(int c, vector<int>& coins){
        if(c == 0) return 0;
        else{
            int ans = INT_MAX;
            auto it = memo.find(c);
            if(it != memo.end()) return it->second;
            else{
                for(int co : coins){
                    if(c - co >= 0){
                        int sub = dp(c - co, coins);
                        if(sub != INT_MAX) ans = min(1 + sub, ans);
                    }
                }
                memo.emplace(c, ans);
            }
            return ans;
        }
    }
};
