class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int i, j, sum = 0, flag = 0;

        cout << "Entered Array :\n";
        for (int i = 0; i < nums.size(); ++i)
        {
            cout << " " << nums[i];
        }

        i = 0;
        while (i < nums.size())
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                sum = nums[i] + nums[j];

                if (sum == target)
                {
                    return {i, j};
                }
            }
            i++;
        }

        return {-1, -1};
    }
};
