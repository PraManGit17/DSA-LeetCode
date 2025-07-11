class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    unordered_map<char, int> map1;
    int l = 0, r = 0, max_count = 0;

    while (r < s.length())
    {
      if (map1.find(s[r]) != map1.end() && map1[s[r]] >= l)
      {
        l = map1[s[r]] + 1;
      }

      map1[s[r]] = r;

      max_count = max(max_count, r - l + 1);
      r++;
    }

    return max_count;
  }
};