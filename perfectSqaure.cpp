#include<bits/stdc++.h>
using namespace std;
int prob(int n, vector<int>& memo)
{
    if (n == 0)
    {
        return 0;
    }
    if (memo[n] != 0)
    {
        return memo[n];
    }
    int res = n;
    for (int i = 1; i * i <= n; i++)
    {
        int subproblem = prob(n - i * i, memo);
        res = min(res, subproblem + 1);
    }
    memo[n] = res;
    return res;
}
int numSquares(int n)
{
    vector<int> memo(n + 1);
    return prob(n, memo);
}
int main()
{
    int n;
    cin >> n;
    cout << numSquares(n) << "\n";
    return 0;
}
