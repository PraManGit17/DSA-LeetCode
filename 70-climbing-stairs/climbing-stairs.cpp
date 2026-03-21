int cs(int n, vector<int> &dp);

class Solution
{
public:
  int climbStairs(int n)
  {

    vector<int> dp(n + 1, -1);

    int count = cs(n, dp);

    return count;
  }
};

int cs(int n, vector<int> &dp)
{
  if (dp[n] != -1)
  {
    return dp[n];
  }
  if (n == 0)
  {
    return dp[0] = 1;
  }
  if (n == 1)
  {
    return dp[1] = 1;
  }
  return dp[n] = cs(n - 2, dp) + cs(n - 1, dp);
}
