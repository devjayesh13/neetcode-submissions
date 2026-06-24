class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;
        for(int i=0;i<n;i++){
            int x = points[i][0], y = points[i][1];
            vector<int> temp = {x, y};
            pq.push({x*x + y*y, temp});
        }
        vector<vector<int>> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
