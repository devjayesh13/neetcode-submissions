class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int len = min(strs[0].length(), strs[strs.size()-1].length());
        for(int i = 0;i<len;i++){
            if(strs[0][i] != strs[strs.size()-1][i]) return strs[0].substr(0,i);
        }
        return strs[0];
    }
};