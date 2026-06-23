class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> n;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > 0) n.emplace(nums[i]);
        }
        vector<int> ne(n.begin(), n.end());
        for(int i=0;i<ne.size();i++){
            if(ne[i] != i+1) return i+1;
            else if(ne[ne.size()-1] == ne.size()) return ne.size()+1;
        } 
        return 1;
    }
};