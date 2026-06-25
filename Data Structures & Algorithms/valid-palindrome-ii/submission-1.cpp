class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0,r = s.length()-1;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else if(s[l] != s[r]){
                return check(s.substr(0, l) + s.substr(l+1)) || check(s.substr(0,r) + s.substr(r+1));
            }
        }
        return true;
    }
    bool check(string k){
        int l = 0, r = k.length()-1;
        bool f = true;
        while(l < r){
            if(k[l] != k[r]) f = false;
            l++;
            r--;
        }
        return f;
    }
};