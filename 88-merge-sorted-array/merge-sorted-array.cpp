class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    vector<int> nums(m + n);
    int i = 0, j = 0, ind = 0;

    while (i < m && j < n)
    {
      if (nums1[i] < nums2[j])
      {
        nums[ind] = nums1[i];
        i++;
      }
      else
      {
        nums[ind] = nums2[j];
        j++;
      }
      ind++;
    }

    while (i < m)
    {
      nums[ind] = nums1[i];
      ind++;
      i++;
    }

    while (j < n)
    {
      nums[ind] = nums2[j];
      ind++;
      j++;
    }

    for (int i = 0; i < m + n; i++)
    {
      nums1[i] = nums[i];
    }

  }
};
