class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int l = 0, r = 0;
    int max_len = 0;
    unordered_map<char, int> dup;

    if(s.empty())
    {
      return 0;
    }

    while (r < s.length())
    {
      if(dup.find(s[r]) != dup.end())
      {
         l = max(l, dup[s[r]]+1);
      }
      dup[s[r]] = r;
      max_len= max(r-l+1, max_len);
      r++;
    }
    return max_len;
  }
};