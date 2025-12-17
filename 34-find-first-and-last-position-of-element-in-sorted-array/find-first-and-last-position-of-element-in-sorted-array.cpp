
class Solution
{
public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    if (nums.size() == 0)
    {
      return {-1, -1};
    }

    int low = 0, high = nums.size() - 1, k;
    bool flag = false;

    while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (nums[mid] == target)
      {
        k = mid;
        flag = true;
        break;
      }
      else if (nums[mid] < target)
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }

    if (flag)
    {
      int mid = k;
      while (mid > 0 && nums[mid - 1] == target)
      {
        mid--;
      }
      int start = mid;
      mid = k;
      while (mid < nums.size() - 1 && nums[mid + 1] == target)
      {
        mid++;
      }
      int end = mid;

      return {start, end};
    }
    else
    {
      return {-1, -1};
    }
  }
};
