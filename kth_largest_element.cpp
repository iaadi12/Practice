class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      priority_queue<int>pq(nums.begin(),nums.end());
      int ans=0;
      while(k--)
      {
        ans=pq.top();
        pq.pop();
      }
      return ans;
    }
};

Solution 2--->
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      return nums[n-k];
      
    }
};

Solution 3-->
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>>pq;
    for(auto x:nums)
    {
      pq.push(x);
      if(pq.size()>k)
        pq.pop();
    }
      
      return pq.top();
    }
};
