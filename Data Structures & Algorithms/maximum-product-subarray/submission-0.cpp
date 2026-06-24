class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), minP = nums[0], maxP = nums[0], ans = nums[0];
        for(int i=1;i<n;i++){
            int prevMin = minP;
            int prevMax = maxP;
            minP = min(prevMin*nums[i], min(prevMax*nums[i], nums[i]));
            maxP = max(prevMax*nums[i], max(prevMin*nums[i], nums[i]));
            ans = max(ans, maxP);
        }
        return ans;
    }
};
