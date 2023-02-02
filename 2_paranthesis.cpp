#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    char c = st.top();
                    st.pop();

                    if( (s[i]==')' && c == '(') or (s[i]==']' && c == '[') or (s[i]=='}' && c == '{') ){

                    }else{
                        return false;
                    }
                }
            }
        }

        if(st.empty()){
            return true;
        }
        return false;
    }
};

int main()
{

    return EXIT_SUCCESS;
}