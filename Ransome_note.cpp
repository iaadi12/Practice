class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len1 = ransomNote.length();
        int len2 = magazine.length();
        if(len1>len2)
            return false;
        for(int i = 0; i < len1; i++)
        {
            char c = ransomNote[i];
            int f = magazine.find(c);
            if(f==-1)
                return false;
            magazine.erase(magazine.begin()+f);
        }
        return true;
    }
};
