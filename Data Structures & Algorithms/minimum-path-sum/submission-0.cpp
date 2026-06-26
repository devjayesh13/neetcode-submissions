class Solution {
public:
    map<pair<int, int>, int> memo;
    int minPathSum(vector<vector<int>>& grid) {
        return path(0, 0, grid);
    }
    int path(int a, int b, vector<vector<int>> &grid){
        int m = grid.size(), n = grid[0].size();
        if(a == m-1 && b == n-1) return grid[m-1][n-1];
        else{
            auto it = memo.find({a, b});
            if(it != memo.end()) return it->second;
            else{
                int ans = INT_MAX, curr = grid[a][b];
                if(a == m-1 && b < n-1) ans = min(curr + path(a,b+1,grid), ans);
                else if(a < m-1 && b == n-1) ans = min(curr + path(a+1,b,grid), ans);
                else ans = curr + min(path(a+1,b,grid), path(a,b+1,grid));
                return memo[{a,b}] = ans;
            }
        }
    }
};