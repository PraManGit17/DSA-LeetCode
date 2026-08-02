class Solution {
  public:

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) { 
    if(intervals.size() == 0)
    {
      return {newInterval};
    }

    intervals.push_back(newInterval);
    sort(intervals.begin(), intervals.end());
    
    vector<vector<int>> result;

    result.push_back(intervals[0]);

    for(int i=1;i<intervals.size();i++)
    {
      vector<int> v1 = result.back();
      vector<int> v2 = intervals[i];
    
      if(v2[0] <= v1[1])
      {
        result.back()[1] = max(v1[1], v2[1]);
      }
      else{
        result.push_back(v2);
      }
    }
    
    return result;
  }
};