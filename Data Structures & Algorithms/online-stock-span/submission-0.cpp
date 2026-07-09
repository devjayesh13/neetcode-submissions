class StockSpanner {
public:
    stack<int> prices;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count = 0;
        prices.push(price);
        stack<int> temp = prices;
        while(!temp.empty() && price >= temp.top()){
            count++;
            temp.pop();
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */