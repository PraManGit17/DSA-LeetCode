void inplaceZeroSubstitution(vector<vector<int>> &matrix, int p1, int p2);

class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix)
  {
    vector<pair<int, int>> pairs;

    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < matrix[0].size(); j++)
      {
        if (matrix[i][j] == 0)
        {
          pairs.push_back({i, j});
        }
      }
    }

    for (auto p : pairs)
    {
      inplaceZeroSubstitution(matrix, p.first, p.second);
    }
  }
};


void inplaceZeroSubstitution(vector<vector<int>> &matrix, int p1, int p2)
{
  for (int i = 0; i < matrix.size(); i++)
  {
    if (matrix[i][p2] != 0)
    {
      matrix[i][p2] = 0;
    }
  }

  for (int j = 0; j < matrix[0].size(); j++)
  {

    if (matrix[p1][j] != 0)
    {
      matrix[p1][j] = 0;
    }
  }
}
