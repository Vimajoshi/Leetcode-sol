#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts)
    {
        map<string, int> m1;
        for (int i = 0; i < accounts.size(); i++)
        {
            for (int j = 0; j < accounts[i].size(); j++)
            {
                m1[accounts[i][j]]++;
            }
        }

        for (auto pr : m1)
        {
            cout << pr.first << " " << pr.second << endl;
        }
    }
};

int main()
{

    Solution s1;
    vector<vector<string>> accounts = {
        {"John", "johnsmith@mail.com", "john_newyork@mail.com"},
        {"John", "johnsmith@mail.com", "john00@mail.com"},
        {"Mary", "mary@mail.com"},
        {"John", "johnnybravo@mail.com"}};
    s1.accountsMerge(accounts);

    return EXIT_SUCCESS;
}