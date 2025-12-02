
class Solution
{
public:
  void initialize(stack<int> &st, vector<int> &nums2)
  {
    for (int i = 0; i < nums2.size(); i++)
    {
      st.push(nums2[i]);
    }
  }

  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
  {
    stack<int> st;
    vector<int> result;

    initialize(st, nums2);


    for (int i = 0; i < nums1.size(); i++)
    {
      int nxt_greater = -1;
      while (nums1[i] != st.top() && !st.empty())
      {
        if (st.top() > nums1[i])
        {
          nxt_greater = st.top();
        }
        st.pop();
      }
      result.push_back(nxt_greater);
      initialize(st, nums2);
    }

    return result;
  }
};
