class Solution {
    struct ft{
        int num;
        int f;
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<int> p(nums.begin(), nums.end());        
        vector<ft> a(p.size());
        unordered_map<int, int> b;
        vector<int> ans;
        for(int x : nums)b[x]++;
        int i = 0;
        for(const auto& p : b){
            a[i].num = p.first;
            a[i].f = p.second;
            i++;
        }
        sort(a.begin(), a.end(), [](const ft &j, const ft &k){return j.f > k.f;});
        for(int i=0;i<k;i++){
            ans.push_back(a[i].num);
        }
        return ans;
    }
};
