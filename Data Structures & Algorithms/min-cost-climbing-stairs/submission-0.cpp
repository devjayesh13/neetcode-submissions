class Solution {
public:
    map<int, int> memo;
    int minCostClimbingStairs(vector<int>& cost) {
        return min(mincost(0, cost), mincost(1, cost));
    }
    int mincost(int i, vector<int>& cost){
        if(i > cost.size()-1) return 0;
        auto it = memo.find(i);
        if(it != memo.end()) return it->second;
        else{
            int ans = min(cost[i] + mincost(i+1, cost), cost[i] + mincost(i+2, cost));
            memo[i] = ans;
            return ans;
        }
        return -1;
    }
};
