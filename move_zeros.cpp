Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]


Solution 1---->
  for(int nonZeros=0,cur=0;cur<nums.size();cur++)
      {
        if(nums[cur]!=0)
          swap(nums[nonZeros++],nums[cur]);
      }
    }
};

Solution 2---->
  int numsZeros=0;
      int n=nums.size();
       // Count the zeroes
      for(int i=0; i<n;i++)
      {
        if(nums[i]==0)
          numsZeros++;
      }
      // Make all the non-zero elements retain their original order.
      vector<int>ans;
      for(int i=0;i<n;i++){
        if(nums[i]!=0)
          ans.push_back(nums[i]);
      }
    // Move all zeroes to the end   
      while(numsZeros--)
      {
        ans.push_back(0);
      }
       // Combine the result
      for(int i=0; i<n;i++)
      {
        nums[i]=ans[i];
          
      }
