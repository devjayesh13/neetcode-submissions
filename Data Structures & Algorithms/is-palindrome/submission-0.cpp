class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove_if(s.begin(), s.end(), [](signed char c){return !isalnum(c);}), s.end());
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});
        int l = 0, r = s.length()-1;
        bool f = true;
        while(l <= r){
            if(s[l] != s[r]){
                f = false;
                break;
            }
            l++;
            r--;
        }
        return f;
    }
};
