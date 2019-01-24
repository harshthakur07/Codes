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
    int t; cin>>t;
    while(t--){
        long long n,r;
        cin>>n>>r;
        long ans = (r-1)*30 + 20;
        cout<<ans<<endl;
    }

    return 0;
}
