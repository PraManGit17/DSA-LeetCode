class Solution
{
public:
  int peakIndexInMountainArray(vector<int> &arr)
  {
    int k=0;
      for(int i=1;i<arr.size();i++)
      {
        if(arr[i - 1] > arr[i])
        {
           k = i-1;
           return k;
        }
      }

      return k;
  }
};