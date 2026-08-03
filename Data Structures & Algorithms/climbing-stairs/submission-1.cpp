class Solution {
public:
    unordered_map<int, int> memo;
    int climbStairs(int n) {
        return dp(n);
    }
    int dp(int n){
        if(n <= 2) return n;

        auto it = memo.find(n);
        if(it != memo.end()) return it->second;
        return memo[n] = dp(n-1) + dp(n-2);
    }
};