class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        if(x < 0){
            int x_n = x * -1;
            while(x_n > 0){
                int num = x_n % 10;
                x_n /= 10;
                if((ans > INT_MAX / 10 || ans < INT_MIN / 10) || 
                    (ans == INT_MAX / 10 && num > INT_MAX % 10) || 
                    (ans == INT_MIN / 10 && num < INT_MIN % 10)){
                        return 0;
                    }
                ans = 10 * ans + num;
            }
            ans = -1 * ans;
        }
        else{
            while(x > 0){
                int num = x % 10;
                x /= 10;
                if((ans > INT_MAX / 10 || ans < INT_MIN / 10) || 
                    (ans == INT_MAX / 10 && num > INT_MAX % 10) || 
                    (ans == INT_MIN / 10 && num < INT_MIN % 10)){
                        return 0;
                }
                ans = 10 * ans + num;
            }
        }
        return ans;
    }
};
