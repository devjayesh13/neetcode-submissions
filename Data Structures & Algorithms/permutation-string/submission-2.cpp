class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        int l = 0, r = s1.length();
        unordered_map<char , int> c_freq, win_freq;
        for(char c : s1) c_freq[c]++;
        for(int i=0;i<s1.length();i++) win_freq[s2[i]]++;
        while(r < s2.length()){
            if(c_freq == win_freq){
                return true;
            }
            else{
                if(--win_freq[s2[l]] == 0) win_freq.erase(s2[l]);
                win_freq[s2[r]]++;
                l++;
                r++;
            }
        }
        return c_freq == win_freq;
    }

};
