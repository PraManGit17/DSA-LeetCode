
class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (s[i] == '{' || s[i] == '(' || s[i] == '[' || s[i] == '}' || s[i] == ')' || s[i] == ']')
      {
        if (s[i] == '}' || s[i] == ')' || s[i] == ']')
        {
          st.push(s[i]);
        
        }
        else
        {
          if (st.empty())
          {
            return false;
          }
          else
          {
            char top = st.top();
            if (
                (s[i] == '(' && top == ')') ||
                (s[i] == '{' && top == '}') ||
                (s[i] == '[' && top == ']'))
            {
              st.pop();
            }
            else
            {
              return false;
            }
          }
        }
      }
      else
      {
        return false;
      }
    }

    if (st.empty())
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};
