class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            temp[(i+k)%size]=nums[i];
        }
        nums=temp;
    }
};
