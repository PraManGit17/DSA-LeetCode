class Solution
{
public:
  int countPermutations(vector<int> &complexity)
  {

    int pred = complexity[0];
    for (int i = 1; i < complexity.size(); i++)
    {
      if (complexity[i] <= pred)
      {
        return 0;
      }
    }

    const long long MOD = 1e9+7; 
    long long fact = 1;
    
    for (int i = 2; i < complexity.size(); i++)
    {
      fact = (1LL * fact * i) % MOD;
    }

    return fact;
  }
};