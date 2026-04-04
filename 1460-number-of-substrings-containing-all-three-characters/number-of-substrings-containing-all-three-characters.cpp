class Solution
{
public:
  int numberOfSubstrings(string s)
  {
    vector<int> presence(3, 0);
    int l = 0, r = 0, count = 0;

    while (r < s.length())
    {
        presence[s[r]-'a']++;

        while(presence[0] > 0 && presence[1] > 0 && presence[2] > 0)
        {
           count += (s.length() - r);
           presence[s[l]-'a']--;
           l++;
        }

        r++;
    }

    return count;
  }
};