class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    if (s.size() != t.size())
    {
      return false;
    }
    else
    {
      for (int i = 0; i < s.size(); i++)
      {
        map1[s[i]]++;
        map2[t[i]]++;
      }

  
      for(int i=0; i < s.size(); i++)
      {
        if(map1[s[i]] != map2[s[i]])
        {
          return false;
        }
      }
    }

    return true;
  }
};