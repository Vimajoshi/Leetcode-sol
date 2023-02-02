#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        map<char, int> subStr;
        map<char, int> str;

        for (int i = 0; i < ransomNote.length(); i++)
        {
            subStr[ransomNote[i]]++;
        }

        for (int i = 0; i < magazine.length(); i++)
        {
            str[magazine[i]]++;
        }

        bool flag = false;

        for (auto j : subStr)
        {
            for (auto i : str)
            {
                if (i.first == j.first)
                {
                    if (i.second >= j.second)
                    {
                        flag = true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return flag;
    }
};

int main()
{

    Solution s1;

    bool b1 = s1.canConstruct("aa", "ab");

    cout << endl;

    cout << "Ans----" << endl;

    cout << "b1: " << b1 << endl;

    return EXIT_SUCCESS;
}

// cout << "Subtr: " << endl;
// for (auto i : subStr)
// {

//     cout << i.first << " : " << i.second << endl;
// }

// cout << endl;

// cout << "Str: " << endl;
// for (auto i : str)
// {

//     cout << i.first << " : " << i.second << endl;
// }