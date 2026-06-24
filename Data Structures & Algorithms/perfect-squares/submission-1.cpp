class Solution {
public:
    map<int, int> memo;
    int numSquares(int n) {
        return dp(n);
    }
    int dp(int k){
        int root = sqrt(k);
        if(k == 0) return 0;
        else if(k == 1) return 1;
        else if(k == 2) return 2;
        else if(root*root == k) return 1;

        auto it = memo.find(k);
        if(it != memo.end()) return it->second;
        int ans = INT_MAX;
        for(int i=1;i*i <= k;i++){
            if(k - i*i >= 0)ans = min(ans, 1 + dp(k-(i*i)));
        }
        return memo[k] = ans;
    }
};