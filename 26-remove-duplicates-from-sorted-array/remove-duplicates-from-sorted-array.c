int removeDuplicates(int* nums, int numsSize) {

      if(numsSize==0)
    {
      return 0;
    }

    int left=0,right,count=0;

    for(right=1;right<numsSize;right++)
    {
      if(nums[left]!=nums[right])
      {
        left++;
        nums[left]=nums[right];
      }
    }

  return left+1;
}
