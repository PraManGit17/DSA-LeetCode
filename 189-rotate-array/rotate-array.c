
void reverse(int *nums, int m, int n);

void rotate(int *nums, int numsSize, int k)
{
  int i, j;
  while (numsSize < k)
  {
    k = k%numsSize; 
  }
  for (i = 0; i < numsSize; i++)
  {
    printf("%d ", nums[i]);
  }
  reverse(nums, 0, numsSize - 1);
  reverse(nums, 0, k - 1);
  reverse(nums, k, numsSize - 1);
  for (i = 0; i < numsSize; i++)
  {
    printf("%d ", nums[i]);
  }
}

void reverse(int *nums, int m, int n)
{
  int temp;
  while (m < n)
  {
    temp = nums[m];
    nums[m] = nums[n];
    nums[n] = temp;
    m++;
    n--;
  }
}
