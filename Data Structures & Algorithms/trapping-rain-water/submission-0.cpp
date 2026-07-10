class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> pre, suf;
        int n = height.size(), pre_m = height[0], suf_m = height[n-1];;
        pre.push_back(pre_m);
        suf.push_back(suf_m);
        for(int i=1;i<n;i++){
            pre_m = max(pre_m, height[i]);
            suf_m = max(suf_m, height[n-i-1]);
            pre.push_back(pre_m);
            suf.push_back(suf_m);
        }
        int water = 0;
        for(int i=0;i<n;i++){
            water += min(pre[i], suf[n-i-1]) - height[i];
        }
        return water;
    }
};
