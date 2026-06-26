class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(accumulate(nums.begin(), nums.end(), 0) < target) return 0;
        int s = nums[0], l = 0, n = nums.size(),ans = INT_MAX;
        if(s >= target) ans = min(ans, 1);
        for(int r = 1;r < n;r++){
            s += nums[r];
            while(s >= target){
                ans = min(ans, r-l+1);
                s -= nums[l++];
            }
        }
        return ans;
    }
};