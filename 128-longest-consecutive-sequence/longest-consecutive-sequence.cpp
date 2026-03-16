class Solution
{
public:
  int longestConsecutive(vector<int> &nums)
  {

    if (nums.size() == 0)
    {
      return 0;
    }

    if (nums.size() == 1)
    {
      return 1;
    }

    sort(nums.begin(), nums.end());
    int count = 0, result = 0;

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] == nums[i - 1])
      {
        continue;
      }

      if ((nums[i] - nums[i - 1]) == 1)
      {
        count++;
      }
      else
      {

        result = max(result, count);
        count = 0;
      }
    }

    result = max(result, count);
    return result+1;
  }
};