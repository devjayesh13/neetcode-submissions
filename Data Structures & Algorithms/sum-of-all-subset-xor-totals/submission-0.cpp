class Solution {
public:
    int res = 0;
    vector<int> curr;
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        bt(0, nums);
        return res;
    }
    void bt(int i, vector<int>& nums){
        if(i == nums.size()){
            int t = 0;
            for(int x : curr) t ^= x;
            res += t;
            return;
        }

        curr.push_back(nums[i]);
        bt(i+1, nums);
        curr.pop_back();

        bt(i+1, nums);
    }
};