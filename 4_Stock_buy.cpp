#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_min = INT32_MAX;
        int curr_profit = 0;

        for(auto i=0; i<prices.size(); i++){
            curr_min = min(curr_min, prices[i]);
            curr_profit = max(curr_profit, prices[i]-curr_min);
        }
        return curr_profit;
    }
};

int main()
{
    Solution s1;

    vector<int> price = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> price1 = {10, 20, 3, 4, 1, 6, 7, 8, 90, 0};

    int max_profit = s1.maxProfit(price1);

    cout << "Max profit: " << max_profit << endl;

    return EXIT_SUCCESS;
}