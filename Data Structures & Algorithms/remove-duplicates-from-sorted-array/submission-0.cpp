class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> nodupe(nums.begin(), nums.end());
        nums.assign(nodupe.begin(), nodupe.end());
        return nodupe.size();
    }
};