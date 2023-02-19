#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> ans(m + n, 0);

        int i = 0;
        int j = 0;

        while (i < nums1.size() or j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            nums1.push_back(ans[i]);
        }

        return nums1;
    }
};

int main()
{
    Solution s1;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    vector<int> answer = s1.merge(nums1, 6, nums2, 3);

    for(auto i : answer){
        cout<<i<<" ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}