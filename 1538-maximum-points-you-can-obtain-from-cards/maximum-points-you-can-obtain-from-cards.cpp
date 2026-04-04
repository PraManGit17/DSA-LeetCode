class Solution
{
public:
  int maxScore(vector<int> &cardPoints, int k)
  {
    int len = cardPoints.size();

    int left_Sum = 0;

    for (int i = 0; i < k; i++)
    {
      left_Sum += cardPoints[i];
    }

    int right_Sum = 0;
    int max_Sum = left_Sum;

    for (int i = 0; i < k; i++)
    {
      left_Sum -= cardPoints[k - 1 - i];
      right_Sum += cardPoints[len - 1 - i];

      max_Sum = max(max_Sum, left_Sum + right_Sum);
    }

    return max_Sum;
  }
};