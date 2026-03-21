int money(int n, vector<int> &nums, vector<int> &dp);

class Solution
{
public:
  int rob(vector<int> &nums)
  {
    vector<int> dp(nums.size(), -1);
    int total_money = money(0, nums, dp);

    return total_money;
  }
};

int money(int n, vector<int> &nums, vector<int> &dp)
{

  if (n >= nums.size())
  {
    return 0;
  }

  if(dp[n] != -1)
  {
    return dp[n];
  }

  int take = nums[n] + money(n + 2, nums, dp);
  int skip = money(n + 1, nums, dp);

  return dp[n] = max(take, skip);
}