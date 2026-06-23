class Solution {
public:
    int countSubstrings(string s) {
        int c = 0,n = s.length();
        for(int center = 0;center<n;center++){
            int l = center, r = center;
            while(l >= 0 && s[l] == s[r] && r < n){
                c++;
                l--;
                r++;
            }
        }
        for(int center = 0;center<n-1;center++){
            int l = center, r = center+1;
            while(l >= 0 && s[l] == s[r] && r < n){
                c++;
                l--;
                r++;
            }
        }
        return c;
    }
};
