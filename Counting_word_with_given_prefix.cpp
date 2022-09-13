Solution1-->
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0,w=words.size(),p=pref.size();
        for(string s:words)
        {
            auto ans=s.substr(0,p);
            if(ans==pref)
                count++;
        }
        return count;
    }
};
Solution2-->
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(string s:words)
        {
            int ans=s.find(pref);
            if(ans==0){
                count++;
            }
        }
        return count;
    }
};
