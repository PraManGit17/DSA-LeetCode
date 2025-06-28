class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i, j, n = nums.size(), sum = 0, count = 0;
        unordered_map<int, int> mp;

        for (i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }

        mp[0] = 1;

        for (j = 0; j < n; j++) {
            sum = nums[j] - k;

            if (mp.find(sum) != mp.end()) {
                count += mp[sum];
            }

            if (mp.find(nums[j]) == mp.end()) {
                mp[nums[j]] = 0;
            }

            mp[nums[j]]++;
        }

        return count;
    }
};
