class Solution {
  public:
    bool makeEven(vector<int> arr) {
        int sum=0,n=arr.size()-1;
        int even=0,odd=0;
        if(n%2==0)
           return false;
        for(int i=0; i<arr.size();i++)
        {
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even % 2 == 0 && odd % 2 == 0)
        {
            return true;
        }
        else
            return false;
    }
};
