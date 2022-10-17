class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum;
        int rightSum;
        for(int i=0;i<nums.size();i++)
        {
            leftSum=0;
            rightSum=0;
            for(int j=0;j<i;j++)
            {
                leftSum+=nums[j];
            }
            for(int j=i+1; j<nums.size();j++)
                rightSum+=nums[j];
            if(leftSum==rightSum)
                return i;
        }
        return -1;
    }
};

Solution 2---->
  class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        for(int i=0; i<nums.size();i++){
            sum-=nums[i];
            if(leftSum==sum)
                return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};
