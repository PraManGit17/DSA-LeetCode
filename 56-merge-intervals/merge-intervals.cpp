class Solution{
  public:
    vector<vector<int>> merge(vector<vector<int>> & intervals)
    {

      if(intervals.size() == 1)
      {
        return intervals;
      }

      vector<vector<int>> result;

      sort(intervals.begin(), intervals.end());
      int n = intervals.size();
    
      result.push_back(intervals[0]);
      
      for(int i=1;i<n;i++)
      {
        vector<int> v1= result.back();
        vector<int> v2= intervals[i];
        if(v1[1] >= v2[0])
        {
          result.back()[1] = max(result.back()[1], v2[1]);
        }
        else{
          result.push_back(v2);
        }
      }
      return result;
    }
};