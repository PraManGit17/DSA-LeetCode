
class Solution
{
public:
  int numRescueBoats(vector<int> &people, int limit)
  {

    sort(people.begin(), people.end());
    int left = 0, right = people.size() - 1, min_count = 0, step = 1;

    while (left <= right)
    { 
      int sum = people[left] + people[right];
      if (people[right] == limit || sum > limit)
      {
        min_count++;
        right--;
      }

      if (sum <= limit)
      {
        min_count++;
        left++;
        right--;
      }
    }

    return min_count;
  }
};