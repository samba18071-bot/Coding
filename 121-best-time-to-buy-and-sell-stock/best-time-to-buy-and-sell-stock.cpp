class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit =0;
        int Bestbuy =prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]>Bestbuy){
                maxProfit = max(maxProfit,prices[i]-Bestbuy);
            }
            Bestbuy = min(Bestbuy,prices[i]);
        }
        return maxProfit;
    }
};