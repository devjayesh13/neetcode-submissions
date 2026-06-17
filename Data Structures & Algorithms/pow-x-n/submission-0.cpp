class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n < 0){
            int new_i = n * -1;
            while(new_i--){
                ans *= x;
            }
            ans = 1/ans;
        }
        else{
            while(n--){
                ans *= x;
            }
        }
        return ans;
    }
};
