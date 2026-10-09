class StockSpanner {
public:
    vector<int> stock;
    StockSpanner() {
       stock ={}; 
    }
    
    int next(int price) {
        stock.push_back(price);
        int cnt = 1;
        for(int i = stock.size()-2 ; i>=0 ; i--){
            if(stock[i] <=  price) cnt++;
            else break;
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */