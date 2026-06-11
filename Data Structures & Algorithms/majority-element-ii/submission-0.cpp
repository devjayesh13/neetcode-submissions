class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;
        for(int x : nums)freq[x]++;
        for(const auto& [key, val] : freq){
            if(val > floor(nums.size()/3)) ans.push_back(key);
        }
        return ans;
    }
};