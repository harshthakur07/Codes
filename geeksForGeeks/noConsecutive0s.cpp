#include <iostream>
using namespace std;
#define mod 1000000007
int ways(int n, int pos, int prev, int dp[][2])
{
    if (pos == n)
        return 1;
    if (pos > n)
        return 0;
    if (dp[pos][prev] != -1)
        return dp[pos][prev] % mod;
    if (prev != 0)
    {
        dp[pos][prev] = (ways(n, pos + 1, 1, dp) % mod + ways(n, pos + 1, 0, dp) % mod) % mod;
    }
    else
        dp[pos][prev] = ways(n, pos + 1, 1, dp) % mod;
    return dp[pos][prev] % mod;
}

int main()
{
    //code
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int dp[n + 1][2];
        for (int i = 0; i < n + 1; i++)
        {
            dp[i][0] = -1;
            dp[i][1] = -1;
        }
        cout << (ways(n, 1, 0, dp) % mod + ways(n, 1, 1, dp) % mod) % mod << endl;
    }
    return 0;
}