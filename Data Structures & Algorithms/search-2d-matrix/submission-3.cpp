class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0;i<m;i++){
            if(matrix[i][0] <= target && matrix[i][n-1] >= target) return binS(matrix[i], target);
        }
        return false;
    }
    bool binS(vector<int>& vec, int tar){
        int l = 0, r = vec.size() - 1;
        if(vec[l] == tar || vec[r] == tar) return true;
        while(l < r){
            int mid = l + (r-l)/2;
            if(vec[mid] == tar) return true;
            else if(vec[mid] < tar) l = mid + 1;
            else if(vec[mid] > tar) r = mid - 1;
        }
        return false;
    }
};
