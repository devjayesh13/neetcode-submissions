class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> pre(s), suff(s), ans(s);
        pre[0] = 1;
        suff[s-1] = 1;
        for(int i=1;i<s;i++) pre[i] = nums[i-1]*pre[i-1];
        for(int i=s-2;i>-1;i--) suff[i] = nums[i+1] * suff[i+1];
        for(int i=0;i<s;i++) ans[i] = suff[i] * pre[i];
        return ans;
    }
};
