Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      int size=nums.size();
      vector<int>ans;
      unordered_map<int,int>mp;
      for(int i=0; i<size; i++)
      {
        mp[nums[i]]++;
      }
      priority_queue<pair<int,int>>pq;
      for(auto x: mp)
      {
        pq.push(make_pair(x.second,x.first));     
      }
      while(k--)
      {
        ans.push_back(pq.top().second);
        pq.pop();
      }
      return ans;
    }
};
