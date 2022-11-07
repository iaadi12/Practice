class Solution {
  public:
  void recurfreq(vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int freq[])
  {
    if(ds.size()==nums.size())
    {
      ans.push_back(ds);
      return;
    }
    for(int i=0;i<nums.size();i++)
    {
      if(!freq[i])
      {
        ds.push_back(nums[i]);
        freq[i]=1;
        recurfreq(nums,ds,ans,freq);
        freq[i]=0;
        ds.pop_back();
      }
    }
  }
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>ds;
      int freq[nums.size()];
      for(int i=0;i<nums.size();i++)freq[i]=0;
      recurfreq(nums,ds,ans,freq);
      return ans;
    }
};

Solution 2---->
  class Solution {
  public:
  void recurfreq(int ind,vector<int>&nums,vector<vector<int>>&ans)
  {
    if(ind==nums.size())
    {
      ans.push_back(nums);
      return;
    }
    for(int i=ind;i<nums.size();i++)
    {
        swap(nums[ind],nums[i]);
        recurfreq(ind+1,nums,ans);
        swap(nums[ind],nums[i]);
      }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>ans;
      recurfreq(0,nums,ans);
      return ans;
    }
};
