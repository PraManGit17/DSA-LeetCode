class Solution
{
public:
  string reverseOnlyLetters(string s)
  {
    int left = 0, right = s.length() - 1;

    while (left <= right)
    {
      if (!isalpha(s[left]))
      {
        left++;
        continue;
      }

      if(!isalpha(s[right]))
      {
        right--;
        continue;
      }

      char temp = s[left];
      s[left] = s[right];
      s[right] = temp;

      left++;
      right--;
    }

    return s;
  }
};