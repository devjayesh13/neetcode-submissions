class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long long ans = left;
        for(int i = left+1;i<right+1;i++){
            ans &= i;
        }
        return ans;
    }
};