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
int n, m;
int dp[1004][1005];
void init(){
    for(int i=0;i<=1004;i++)
     for(int j=0;j<=1005;j++) dp[i][j]=-1;
}
int solution(int i, int j, int o[][m]){
        if(i>=n || j>=m) return 0;
        if(i==n-1 && j==m-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = solution(i,j+1,o) + solution(i+1,j,o);
        return dp[i][j];
}

int main()
{
    bhaukaal;
     cin>>n>>m;
    int obstacle[n][m];
    int i,j;
    init();
    rep(i,n){
        rep(j,m) cin>>obstacle[i][j];
    }

    cout<<solution(0,0,obstacle);

    return 0;
}
