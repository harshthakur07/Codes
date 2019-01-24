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
    int t;  cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        int chairs = n*m;
        bool isPossible = false;
        // while(chairs>1){
        //     chairs = chairs/2;
        //     if(chairs==1){
        //         isPossible = true;
        //     }
        // }
        if(chairs%2==0) isPossible = true;
        if(isPossible) cout<<"YES\n";else cout<<"NO\n";
    }

    return 0;
}
