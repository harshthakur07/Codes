//harsh thakur solution

#include <bits/stdc++.h>
using namespace std;

#define f(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) f(i, 0, n)
#define mp(a, b) make_pair(a, b)
#define pi pair<int, int>
#define vecti vector<int>
#define vpi vector<pair<int, int>>
#define pb(a) push_back(a)
#define bhaukaal                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

//"1231565"
bool isValid(char c)
{
    if ((int)c - 48 > 0 && (int)c - 48 <= 9)
        return true;
    return false;
}

long long ways(char s[], int pos, int n, long long int dp[])
{
    if (pos == n)
        return 1;
    if (!isValid(s[pos]))
        return 0;
    if (pos > n)
        return 0;
    if (dp[pos] != -1)
        return dp[pos];

    long long ans = 0;
    ans += ways(s, pos + 1,n, dp);
    int t = -1;
    if (pos < n - 1)
    {
        t = ((int)s[pos] - 48) * 10 + ((int)s[pos + 1] - 48);
        if (t >= 1 && t <= 26)
            ans += ways(s, pos + 2, n, dp);
    }
    return dp[pos] = ans;
}

int main()
{
    // bhaukaal;
    char s[5004];
    while (true)
    {
        scanf("%s",s);
        int l = strlen(s); 
        if (l == 1 && (int)s[0] == 48)
        break;
        long long dp[l + 1];
        for (long long i = 0; i <= l; i++)
            dp[i] = -1;
        cout << ways(s, 0,l, dp);
    }
    return 0;
}
