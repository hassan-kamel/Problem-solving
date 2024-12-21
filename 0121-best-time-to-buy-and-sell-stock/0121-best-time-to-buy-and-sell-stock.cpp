class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, current_min_price = 10e5+1;
        for (int price : prices){
            current_min_price = min(current_min_price ,  price);
            max_profit = max(max_profit, price - current_min_price );
        }
        return max_profit;
    }
};