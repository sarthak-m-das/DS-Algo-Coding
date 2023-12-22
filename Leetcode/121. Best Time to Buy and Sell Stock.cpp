//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int max = prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--) {
            if(prices[i]<max) {
                maxProfit = maxProfit< max-prices[i]? max-prices[i] : maxProfit;
            } else {
                max = prices[i];
            }
        }
        return maxProfit;
    }
};