class Solution {
public:
    int firstUniqChar(string s) {
        int len=s.length();
        map<char,int>mpp;
        int add=0;
        for(int i=0;i<len;i++)
        {
            mpp[s[i]]++;
        }
        for(int i=0; i<len;i++)
        {
            if(mpp[s[i]]==1)
                return i;
        }
        return -1;
    }
};
