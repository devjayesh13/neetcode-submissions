class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n-3;i++){
            for(int j = i+1;j<n-2;j++){
                int l = j+1;
                int r = n-1;
                while(l < r){
                    long long sum = (long long) nums[i] + nums[l] + nums[r] + nums[j];
                    if(sum == target) {
                        ans.push_back({nums[i], nums[l], nums[r], nums[j]});
                        l++;
                        r--;
                    }
                    else if(sum < target) l++;
                    else if(sum > target) r--;
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};