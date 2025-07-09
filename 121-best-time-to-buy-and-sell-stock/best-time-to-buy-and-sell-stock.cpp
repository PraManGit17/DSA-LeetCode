class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
      int curr_price, profit=0, max_profit=0, min_price=prices[0];

      for(int i=1; i < prices.size(); i++)
      {
        curr_price=prices[i];

        if(min_price>curr_price)
        {
          min_price = curr_price;
        }
        else{
          profit= curr_price - min_price;
          max_profit = std::max(profit, max_profit);
        }
      }

      return max_profit;
    }
};
