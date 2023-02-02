#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (target == nums[mid])
            {
                return mid;
            }
            else if (target > nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 100};

    Solution s1;

    int ans = s1.search(arr, 100);

    cout << "Ans: " << ans << endl;

    return EXIT_SUCCESS;
}