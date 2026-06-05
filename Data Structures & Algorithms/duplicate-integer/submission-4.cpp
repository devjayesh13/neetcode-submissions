#include<set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int s = nums.size();
        std::set<int> a(nums.begin(), nums.end());
        if(a.size() != s) return true;
        else return false;
    }
};