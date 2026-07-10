class Solution {
public:
    int res = 0;
    vector<int> curr;
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        bt(0, 0, nums);
        return res;
    }
    void bt(int i, int xr, vector<int>& nums){
        if(i == nums.size()){
            res += xr;
            return;
        }

        curr.push_back(nums[i]);
        bt(i+1, xr ^ nums[i], nums);
        curr.pop_back();

        bt(i+1, xr, nums);
    }
};