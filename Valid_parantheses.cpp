class Solution {
public:
    bool isValid(string s) {
        map<char, char> mapping;
        mapping['}'] = '{';
        mapping[')'] = '(';
        mapping[']'] = '[';
        map<char, char>::iterator itr;
        //create Stack
        stack<char>st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.emplace(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            {
                if(st.empty())
                    return false;
                else{
                    char temp = st.top();//store to match value of top of stack in temp
                    //checking for every parantheses
                    itr = mapping.find(s[i]);
                    if (temp == itr->second){  // itr->first is key, itr->second is value
                        st.pop();
                }
                    else return false;
            }
            }
        }
        return st.empty()?true:false;
    }
};
