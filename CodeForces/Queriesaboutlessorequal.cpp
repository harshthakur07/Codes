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

int main()
{
    bhaukaal;
    int i,n,m; cin>>n>>m;
    vector<long long>a(n);
    vector<long long>b(n);
    rep(i,n) cin>>a[i];
    rep(i,m) cin>>b[i];
    sort(a.begin(),a.end());
    cout << upper_bound(a.begin(), a.end(), b[0]) - a.begin();
    for(i=1;i<m;i++)
    {
        cout<<" "<<upper_bound(a.begin(),a.end(),b[i]) - a.begin();
    }
    cout<<"\n";
    return 0;
}


