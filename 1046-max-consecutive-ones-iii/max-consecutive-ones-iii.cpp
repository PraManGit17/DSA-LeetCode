

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    if (nums.size() == 1)
    {
      if (nums[0] == 0 && k == 0)
      {
        return 0;
      }
      else{
        return 1;
      }
    }
        int l = 0, store = 0, max_len = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num == 0) {
                if (store >= k) {
                    while (store >= k) {
                        if (nums[l] == 0) {
                            store--;
                        }
                        l++;
                    }
                }
                store++;
            }
                    max_len = max(max_len, i - l+1);
        }

        return max_len;
    }
};