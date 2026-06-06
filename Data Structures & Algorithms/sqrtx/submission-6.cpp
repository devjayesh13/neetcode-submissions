class Solution {
public:
    int mySqrt(int x) {
        if(x <= 4 && x > 1) return 2;
        else if(x < 1) return 0;
        else if(x == 1) return 1;
        else{
            for(long long i=2;i<x/2;i++){
                if(x >= i*i && x <= (i+1)*(i+1)){
                    if(x == i*i) return i;
                    else if(x == (i+1)*(i+1)) return i+1;
                    else return i;
                }
            }
        }
        return 0;
    }
};