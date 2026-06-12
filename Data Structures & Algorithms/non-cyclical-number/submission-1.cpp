class Solution {
public:
    map<int, int> memo;
    bool isHappy(int n) {
        bool run = true, f;
        int n_new = n;
        while(run){
            int d = sq(n_new);
            if(d == 1){
                f = true;
                run = false;
            }
            else if(memo.find(d) != memo.end()){
                f = false;
                run = false;
            }
            n_new = d;
        }
        return f;
    }
    int sq(int k){
        int s = 0, ori = k;
        while(k > 0){
            int d = k%10;
            s += d*d;
            k /= 10;
        }
        memo[ori] = s;
        return s;
    }
};
