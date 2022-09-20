Solution 1---->
  
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n1 = nums1.size(), n2 = nums2.size(),i = 0, j = 0;
        vector<int> intersec;
        while( i < n1 && j < n2){
                if(nums1[i] < nums2[j])
                    i++;
                else if(nums2[j] < nums1[i])
                    j++;
                else if(nums1[i] == nums2[j] ){
                    intersec.push_back(nums1[i]);
                    i++;
                    j++;
                }
        }
        return intersec;
    }
};



Solution 2---->
class Solution {
 public:
    void intersect(vector<int>& nums1, vector<int>& nums2) {
    vector <int>ans;
    map<int,int> m;
    for(auto x : nums1){
        m[x]++;
    }
    for(auto x : nums2){
        if(m[x] >  0){
        ans.push_back(x);
        m[x]--;

      }
   }
  for(auto it:ans)
     cout<<it<<" ";
}
};
