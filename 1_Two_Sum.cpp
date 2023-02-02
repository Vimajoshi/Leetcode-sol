#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i,j};
                }
            }
        }
        return {0};
    }
};

int main()
{
    Solution s1;
    vector<int> num{3,2,4};

    vector<int> ans = s1.twoSum(num, 6);

    cout<<ans.at(0)<<" "<<ans.at(1);
    cout << endl;
    return EXIT_SUCCESS;
}