//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max=0;
        for(int i=1;i<n;i++) {
            if(prices[i]>prices[i-1])
            max+=prices[i]-prices[i-1];
        }
        return max;
    }
};