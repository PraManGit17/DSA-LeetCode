void reversing(int l, int r, vector<int> &nums)
{
  int temp;
  while (l < r)
  {
    temp = nums[l];
    nums[l] = nums[r];
    nums[r] = temp;

    l++;
    r--;
  }
}

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {

    int k = 0;

    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i - 1] > nums[i])
      {
        k = i;
        break;
      }
    }

    reversing(0, k - 1, nums);
    reversing(k, nums.size() - 1, nums);
    reversing(0, nums.size()-1, nums);

    int low = 0, mid, high = nums.size()-1;

    while (low <= high)
    {
      mid = low + (high - low) / 2;

      if (nums[mid] == target)
      {
        return (mid+k)%nums.size();
      }
      else if (target > nums[mid])
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
    return -1;
  }
};
