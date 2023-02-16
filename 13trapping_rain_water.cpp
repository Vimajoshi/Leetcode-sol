#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        vector<int> left(height.size(), 0);
        vector<int> right(height.size(), 0);
        int ans = 0;

        left[0] = height[0];
        for (int i = 1; i < height.size(); i++)
        {
            left[i] = max(height[i], left[i - 1]);
        }

        cout << endl;
        right[height.size()-1] = height[height.size()-1];
        for (int i = height.size() - 2; i >= 0; i--)
        {
            right[i] = max(height[i], right[i+1]);
        }


        for (int i = 0; i < height.size(); i++)
        {
            ans = ans + (min(left[i], right[i]) - height[i]);
        }

        return ans;
    }
};

int main()
{

    Solution s1;

    vector<int> height = {3,1,2,4,0,1,3,2};

    int answer = s1.trap(height);

    cout << "The Answer is: " << answer << endl;

    return EXIT_SUCCESS;
}