class Solution {
public:
    bool isAnagram(string s, string t) {
        int f = 0;
        vector<char> a(s.begin(), s.end()), b(t.begin(), t.end());
        map<char, int> u,y;
        for(char x : a) u[x]++;
        for(char x : b) y[x]++;
        if(u != y) return false;
        else return true;
    }
};
