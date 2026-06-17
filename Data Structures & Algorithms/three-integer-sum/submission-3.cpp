class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            int l = i+1;
            int r = n-1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if(sum < 0) l++;
                else if(sum > 0) r--;
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};
