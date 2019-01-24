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
    long long x,y;
    while(t--){
        cin>>x>>y;
        // int z = x;
        // for(int i=x+1; i<=y;i++){
        //     z = z^i;
        //     // cout<<z<<endl;
        // }
        if(x%2==0) x = x+1; if(y%2==0) y = y-1;

        int odds = (y-x)/2 +1;
        // if(x%2!=0) odds++;
        if(odds%2==0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
    return 0;
}
