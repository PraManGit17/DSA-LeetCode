class Solution
{
public:
  vector<int> topKFrequent(vector<int> &nums, int k)
  {
    vector<int> result(k);
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
      if (map.find(nums[i]) == map.end())
      {
        map[nums[i]] = 0;
      }
      map[nums[i]] += 1;
    }

    vector<pair<int, int>> vec(map.begin(), map.end());
    int max = 0;

    sort(vec.begin(), vec.end(),
         [](pair<int, int> &a, pair<int, int> &b)
         {
           return a.second > b.second;
         });

    for (int i = 0; i < k; i++)
    {
      result[i] = vec[i].first;
    }

    return result;
  }
};
