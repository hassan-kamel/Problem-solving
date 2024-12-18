class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int len = prices.size();
        vector<int> res;
        for(int i=0;i<len;i++){
            bool found = false;
            for(int j=i+1;j<len;j++){
                if(prices[j]<=prices[i]){
                    res.push_back(prices[i]-prices[j]);
                    found = true;
                    break;
                }
            }

            if(!found) res.push_back(prices[i]);
        }

        return res;
        
    }
};