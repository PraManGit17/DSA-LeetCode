#include <unordered_map>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numToindex;

        for(int i=0;i<nums.size();i++)
        {
            int complement = target - nums[i];

            if(numToindex.find(complement)!=numToindex.end())
            {
                return {numToindex[complement], i};
            }

            numToindex[nums[i]]=i;
        }

        return {-1, -1};
    }
};
