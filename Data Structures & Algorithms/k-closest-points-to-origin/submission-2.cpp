class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int, vector<int>>> pq;
        for(int i=0;i<n;i++){
            int x = points[i][0], y = points[i][1], dist = x*x + y*y;
            if(pq.size() < k){
                pq.push({dist, points[i]});
            }
            else{
                if(dist < pq.top().first){
                    pq.pop();
                    pq.push({dist, points[i]});
                }
            }
        }
        vector<vector<int>> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
