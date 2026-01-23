class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int k=0;
    
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i - 1] > nums[i])
      {
        k=i;
        return nums[k];
      }
    }

    return nums[k];
  }
};