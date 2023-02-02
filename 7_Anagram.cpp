#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        map<char, int> m1;
        map<char, int> m2;

        for (int i = 0; i < s.length(); i++)
        {
            m1[s[i]]++;
        }

        for (int j = 0; j < t.length(); j++)
        {
            m2[t[j]]++;
        }

        cout<<"M1: "<<endl;

        for (auto &pr : m1)
        {
            cout << pr.first << " " << pr.second << endl;
        }
        cout<<"M2: "<<endl;
        for (auto &pr : m2)
        {
            cout << pr.first << " " << pr.second << endl;
        }

        return m1 == m2;
    }
};

int main()
{

    Solution s1;

    bool ans = s1.isAnagram("bacccc", "abcccc");

    cout << "ans: " << ans << endl;

    return EXIT_SUCCESS;
}