
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {

    unordered_map<int, int> map;

    int times = (int)nums.size() / 2;
    
    for (int i = 0; i < nums.size(); i++)
    {
      if (map.find(nums[i]) == map.end())
      {
        map[nums[i]] = 0;
      }
      map[nums[i]] = map[nums[i]] + 1;

      if (map[nums[i]] > times)
      {
        return nums[i];
      }
    }

    return 0;
  }
};
