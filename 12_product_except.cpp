#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    int product = 1;
    vector<int> ans;
    int i = 0;
    while (i < n)
    {
        if (!i)
            product = product * nums[i];
        i++;
    }
    ans.push_back(product);
    product = 1;
    i = 0;
    while (i < n)
    {
        productExceptSelf(nums);
        i++;
    }
    return ans;
}

int main()
{
    vector<int> vec = {-1,1,0,-3,3};
    vector<int> ans = productExceptSelf(vec);

    

    return EXIT_SUCCESS;
}