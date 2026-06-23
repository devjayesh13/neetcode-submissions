class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int, int>> mem;
        for(int i=0;i<arr.size();i++){
            mem.push_back({arr[i], abs(x - arr[i])});
        }
        sort(mem.begin(), mem.end(),
            [](const pair<int, int> &a, const pair<int,int> &b){
                if(a.second == b.second) return a.first < b.first;
                else return a.second < b.second;
            });
        vector<int> ans(k);
        for(int i=0;i<k;i++){
            ans[i] = mem[i].first;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};