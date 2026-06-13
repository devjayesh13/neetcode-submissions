class Solution {
public:
    bool canJump(vector<int>& nums) {
        int s = nums.size(), far = 0;
        for(int i=0;i<s;i++){
            if(i > far) return false;
            far = max(far, i + nums[i]);
        }
        return true;
    }
};
