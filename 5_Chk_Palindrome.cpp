#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // check string is valid
    bool isValid(char ch)
    {
        if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            return 1;
        }
        return 0;
    }

    string toLowerCase(string str)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }

    // checking palindrome

    bool checkPalindrome(string str)
    {
        int s = 0;
        int e = str.length() - 1;

        while (s <= e)
        {
            if (str[s] != str[e])
                return 0;
            else
            {

                s++;
                e--;
            }
        }
        return 1;
    }

    // main
    bool isPalindrome(string s)
    {
        // removing all of characters
        string st = "";

        for (int i = 0; i < s.length(); i++)
        {
            if (isValid(s[i]))
            {
                st.push_back(s[i]);
            }
        }

        // converting to lc

        st = toLowerCase(st);

        // checking pd

        return checkPalindrome(st);
    }
};

int main()
{
    Solution s1;

    string str1 = "A man, a plan, a canall: Panama";
    string str2 = "0P";

    cout << "Is PD: " << s1.isPalindrome(str2);
    cout << endl;

    return 0;
}
