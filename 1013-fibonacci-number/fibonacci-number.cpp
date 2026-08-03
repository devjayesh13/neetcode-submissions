class Solution {
public:
    map<int, int> memo;
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        auto it = memo.find(n);
        if(it != memo.end()) return it->second;
        return fib(n-1) + fib(n-2);
    }
};