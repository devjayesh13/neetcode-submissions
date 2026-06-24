class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int it1 = 0, it2 = 0, w1 = word1.length(), w2 = word2.length(), i = 0;
        string ans = "";
        while(it1 < w1 && it2 < w2){
            if(i%2 == 0)ans += word1[it1++];
            else ans += word2[it2++];
            i++;
        }
        ans += word1.substr(it1);
        ans += word2.substr(it2);
        return ans;
    }
};