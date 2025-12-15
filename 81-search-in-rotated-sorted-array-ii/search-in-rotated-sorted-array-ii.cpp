
class Solution
{
public:
  bool search(vector<int> &nums, int target)
  {
    int k = 0;

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] < nums[i - 1])
      {
        k = i;
        break;
      }
    }

    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
    
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (target == nums[mid])
      {
        return true;
      }

      else if (target > nums[mid])
      {
        low = mid + 1;
      }

      else if (target < nums[mid])
      {
        high = mid - 1;
      }
    }

    return false;
  }
};
