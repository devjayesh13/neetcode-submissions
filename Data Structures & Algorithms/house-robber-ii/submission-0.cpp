class Solution {
public:
    map<int, int> memo;
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        int ans1 = robbing(0, v1);
        memo.clear();
        int ans2 = robbing(0, v2);
        return max(ans1, ans2);
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
        return -1;
    }
};
