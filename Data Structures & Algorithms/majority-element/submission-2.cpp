class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), f = floor(n/2);
        unordered_map<int, int> a;
        for(int x : nums)a[x]++;
        for (const auto& [element, count] : a){
            if(count > f)return element;
        }
        return 0;
    }
};