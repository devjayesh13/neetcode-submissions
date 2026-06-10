class Solution {
public:
    map<int, int> count;
    int climbStairs(int n) {
        return steps(0, n);
    }
    int steps(int k, int n){
        if(n-k == 1) return 1;
        else if(n-k == 2) return 2;
        auto it = count.find(k);
        if(it != count.end()) return it->second;
        else{
            int ans = steps(k+1, n) + steps(k+2, n);
            count.emplace(k, ans);
            return ans;
        }
    }
};