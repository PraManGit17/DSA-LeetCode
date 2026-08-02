class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> answer(nums.size(), 1);
      
      int n = nums.size();

      for(int i=1;i<n;i++)
      {
        answer[i] = answer[i-1] * nums[i-1];
      }

      cout << "\nAfter Left Pass: ";
      for(int i=0;i<n;i++)
      {
        cout << answer[i] << " ";
      }
      
      int right_value = 1;
      for(int i=n-1;i>=0;i--)
      {
        answer[i] = answer[i] * right_value; 
        right_value *= nums[i];
      }

      return answer;
    }
};