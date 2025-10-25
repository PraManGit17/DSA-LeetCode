class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, right, color = 0;

        while (left < nums.size()) {

            if (color > 2)
                break;

            while (left < nums.size() && nums[left] == color) {
                left++;
            }

            if (left >= nums.size())
            {
                break;
            }

        
            right = left + 1;

            while (right < nums.size() && nums[right] != color) {
                right++;
            }

            if (right == nums.size()) {
                color++;
                continue;
            } 
            
            if(left < nums.size() && right < nums.size())
            {
                nums[right] = nums[left];
                nums[left] = color;
            }
            left++;
        }
    }
};