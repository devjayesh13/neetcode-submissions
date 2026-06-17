class Solution {
public:
    int search(vector<int>& nums, int target) {
        int r = nums.size()-1, l = 0, mid = l + (r-l)/2, ans = -1;
        while(l <= r){
            mid = l + (r-l)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            else if(nums[mid] > target){
                r = mid-1;
            }
            else if(nums[mid] < target){
                l = mid+1;
            }
        }
        return ans;
    }
};
