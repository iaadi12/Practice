class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(nums1.size());
        int i,j,k;
        i=j=k=0;
        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                nums3[k++] = nums1[i++];
            }
            else
                nums3[k++] = nums2[j++];
        }
        for(; i < m; i++)
            nums3 [k++] = nums1 [i];
        for(; j < n; j++)
            nums3 [k++] = nums2 [j];
        nums1=nums3;
    }
};
