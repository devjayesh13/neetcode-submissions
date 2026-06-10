class Solution {
public:
    map<pair<int, bool>, int> memo;
    int maxProfit(vector<int>& prices) {
        return profit(0, false, prices);
    }
    int profit(int i, bool b, vector<int>& prices){
        int len = prices.size();
        if(i == len) return 0;
        if(memo.find({i, b}) != memo.end()) return memo[{i, b}];
        int ans;
        if(b == false) ans = max(-prices[i] + profit(i+1, true, prices), profit(i+1, false, prices));
        else if(b == true) ans = max(prices[i], profit(i+1, true, prices));

        memo[{i, b}] = ans;
        return ans;
    }
};
