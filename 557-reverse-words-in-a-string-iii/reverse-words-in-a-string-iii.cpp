class Solution {
public:
    string reverseWords(string s) {
       int left=0, right;
       
       
       for(int i=0;i<s.length();i++)
       {
          if(s[i+1] == ' ' || i == s.length() - 1)
          {
            right = i;

            while(left <= right)
            {
              char temp = s[left];
              s[left] = s[right];
              s[right] = temp;

              left++;
              right--;
            }

            left = i+2;
          }
       }

       return s;
    }
};