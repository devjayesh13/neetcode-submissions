class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0,r = 0, le = 0;
        unordered_map<char, int> d;
        for(r = 0;r<s.length();r++){
            if(d.find(s[r]) != d.end()){
                l = max(d[s[r]]+1,l);
            }
            d[s[r]] = r;
            le = max(le, r-l+1);
        }
        return le;
    }
};
