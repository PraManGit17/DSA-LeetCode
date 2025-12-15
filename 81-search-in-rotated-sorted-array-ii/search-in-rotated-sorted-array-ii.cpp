bool binarysearch(vector<int> &nums, int low, int high, int target);

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

    return binarysearch(nums, 0, k - 1, target) || binarysearch(nums, k, nums.size() - 1, target);
  }
};

bool binarysearch(vector<int> &nums, int low, int high, int target)
{

  if (low > high)
  {
    return false;
  }

  int mid = low + (high - low) / 2;

  if (nums[mid] == target)
  {
    return true;
  }
  else if (nums[mid] > target)
  {
    return binarysearch(nums, low, mid - 1, target);
  }
  else
  {
    return binarysearch(nums, mid + 1, high, target);
  }
}