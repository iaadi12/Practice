Solution1---->
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    vector < int >  subarray;
    int max_sum = INT_MIN;
  for (int i = 0; i < nums.size(); i++) {
    int curr_sum = 0;
    for (int j = i; j < nums.size(); j++) {
      curr_sum += nums[j];
      if (curr_sum > max_sum) {
        subarray.clear();
        max_sum = curr_sum;
        subarray.push_back(i);
        subarray.push_back(j);
      }
    }
  }
  return max_sum;
}
};
Solution2---->
 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN;
    int min_sum=0;
  for (int i = 0; i < nums.size(); i++) {
      min_sum+=nums[i];
      if(min_sum>max_sum)
          max_sum=min_sum;
        if(min_sum<0){
            min_sum=0;
        }
  }    
  return max_sum;
}
};
