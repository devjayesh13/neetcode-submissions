class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int s = nums.size(), f = 0;
        unordered_map<int, vector<int>> index;
        for(int i=0;i<s;i++){
            index[nums[i]].push_back(i);
        }
        for(const auto& [num, id] : index){
            for(int i=0;i<id.size()-1;i++){
                if(abs(id[i] - id[i+1]) <= k) f = 1;
            }
        }
        return f ? true : false;
    }
};