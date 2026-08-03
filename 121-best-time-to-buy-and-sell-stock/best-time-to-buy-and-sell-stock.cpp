class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min_stock = prices[0];
      int max_profit = 0;
      for(int i=1;i<prices.size();i++)
      {
        if(min_stock > prices[i])
          {
            min_stock = prices[i];
          }
        else{
          int profit = abs(prices[i] - min_stock);
          max_profit = max(max_profit, profit);
          }
      }

      return max_profit;
    }
};