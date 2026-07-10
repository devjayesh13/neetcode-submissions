class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), xored = nums[0];
        for(int i=1;i<n;i++) xored ^= nums[i];
        for(int i=0;i<n+1;i++) xored ^= i;
        return xored;
    }
};
