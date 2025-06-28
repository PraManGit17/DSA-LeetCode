class Solution {
public:
    int pivotIndex(vector<int> nums) {
        int i, n = nums.size(), lsum = 0, rsum = 0, pivot = -1;

        for (i = 1; i < n; i++) {
            nums[i] = nums[i - 1] + nums[i];
        }

        for (i = 0; i < n; i++) {
            if (i == 0) {
                rsum = nums[n - 1] - nums[i];
                if (rsum == 0) {
                    pivot = i;
                    break;
                }
            } else if (i == n - 1) {
                lsum = nums[i - 1];
                if (lsum == 0) {
                    pivot = i;
                    break;
                }
            } else {
                lsum = nums[i - 1];
                rsum = nums[n - 1] - nums[i];
                if (lsum == rsum) {
                    pivot = i;
                    break;
                }
            }
        }

        return pivot;
    }
};
