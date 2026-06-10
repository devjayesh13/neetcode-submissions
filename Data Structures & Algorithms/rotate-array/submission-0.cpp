class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k--){
            int last = nums[nums.size()-1];
            nums.insert(nums.begin(), last);
            nums.pop_back();
        }
    }
};