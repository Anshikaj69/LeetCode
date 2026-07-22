class StockSpanner {

public:

    stack<int> s;
    vector<int> span;
    StockSpanner() {
       
    }
    
    int next(int price) {
        
        span.push_back(price);
        int i = span.size()-1;
        int ans = 1;

        while(!s.empty() && span[s.top()] <= price){
            s.pop();
        }

        if(!s.empty()){
        ans =  i - s.top();
        }else{
            ans = i+1;
        }
        s.push(i);

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */