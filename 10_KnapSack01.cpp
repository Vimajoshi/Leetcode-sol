// knapsack code recursion + memorization;

#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
    int t[n + 1][W + 1];

    // initialization of the matrix

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            if (i == 0 or j == 0)
                t[i][j] = 0;
        }
    }

    // pattern

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < W + 1; j++)
        {
            if (wt[i - 1] <= j)
                t[i][j] = max((val[i - 1] + t[i - 1][j - wt[i - 1]]), t[i - 1][j]);

            else
                t[i][j] = t[i - 1][j];
        }
    }
    return t[n][W];
}

int KnapsackRecursive(int woas[], int values[], int totalW, int size)
{
    // creating a matrix for memorization
    int t[size + 1][totalW + 1];
    // initializing by -1
    memset(t, -1, sizeof(t));

    // base case;

    if (size == 0 or totalW == 0)
        return 0;

    if (t[size][totalW] != -1)
        return t[size][totalW];

    // pattern

    if (woas[size - 1] <= totalW)
    {
        return t[size][totalW] = max((values[size - 1] + KnapsackRecursive(woas, values, totalW - woas[size - 1], size - 1)), KnapsackRecursive(woas, values, totalW, size - 1));
    }

    else if (woas[size - 1] > totalW)
    {
        return t[size][totalW] = KnapsackRecursive(woas, values, totalW, size - 1);
    }
}

int main()
{
    int w[] = {1, 2, 3};

    int val[] = {4, 6, 7};

    int W = 7;

    int n = sizeof(w) / sizeof(w[0]);

    cout << "PROFIT: " << KnapsackRecursive(w, val, W, n) << endl;
    cout << "PROFIT: " << knapSack(W, w, val, n) << endl;

    return EXIT_SUCCESS;
}