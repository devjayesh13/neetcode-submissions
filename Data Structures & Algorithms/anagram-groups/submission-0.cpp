class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for(string st : strs){
            vector<int> count(26, 0);
            for(char s : st) count[s -'a']++;
            string key = to_string(count[0]);
            for(int i=1;i<26;i++){
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(st);
        }
        vector<vector<string>> result;
        for(auto p : res){
            result.push_back(p.second);
        }
        return result;
    }
};
