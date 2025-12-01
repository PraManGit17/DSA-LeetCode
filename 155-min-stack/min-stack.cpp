
class MinStack
{
public:
  vector<int> stack;
  vector<int> minstack;

  MinStack()
  {
    //
  }

  void push(int val)
  {
    stack.push_back(val);

    if (minstack.empty() || val <= minstack.back())
    {
      minstack.push_back(val);
    }
    else
    {
      minstack.push_back(minstack.back());
    }
  }

  void pop()
  {
    if (stack.size() == 0)
    {
      return;
    }
    else
    {
      stack.pop_back();
      minstack.pop_back();
    }
  }

  int top()
  {
    if (stack.size() == 0)
    {
      return -1;
    }
    else
    {
      return stack.back();
    }
  }

  int getMin()
  {
    if (stack.size() == 0)
    {
      return -1;
    }
    else
    {
      return minstack.back();
    }
  }
};
