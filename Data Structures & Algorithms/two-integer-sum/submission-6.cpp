class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> a;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            a[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            auto it = a.find(target - nums[i]);
            if(it != a.end() && it->second != i){
                ans[0] = i;
                ans[1] = it->second;
            }
        }
        if(ans[0] > ans[1]){
            int t = ans[0];
            ans[0] = ans[1];
            ans[1] = t;
        }
        return ans;
    }
};
