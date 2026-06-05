class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val) nums[i] = INT_MAX;
            else x++;
        }
        sort(nums.begin(), nums.end());
        return x;
    }
};