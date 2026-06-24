class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int c = 0;
        for(int i=0;i<=n;i++){
            ans.push_back(count(i));
        }
        return ans;
    }
    int count(int n){
        int c = 0;
        for(int i=1;n>0;i++){
            if(n & 1) c++;
            n = n >> 1;
        }
        return c;
    }
};
