class Solution {
public:
    map<int, int> memo;
    int rob(vector<int>& nums) {
        return robbing(0, nums);
    }
    int robbing(int k, vector<int>& nums){
        if(k >= nums.size()) return 0;
        auto it = memo.find(k);
        if(it != memo.end()) return it->second;
        else{
            int ans = max(robbing(k+1, nums), nums[k] + robbing(k+2, nums));
            memo[k] = ans;
            return ans;
        }
    }
};
