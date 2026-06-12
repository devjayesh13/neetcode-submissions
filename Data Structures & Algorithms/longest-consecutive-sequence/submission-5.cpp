class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len = 0, curr = 1;
        set<int> dupe(nums.begin(), nums.end());
        nums.assign(dupe.begin(), dupe.end());
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1] - nums[i] != 1) curr = 1;
            else if(nums[i+1] - nums[i] == 1) curr++;
            len = max(len, curr);
        }
        return len;
    }
};
