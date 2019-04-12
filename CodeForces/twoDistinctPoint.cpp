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
#define ll long long
#define bhaukaal                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    bhaukaal;
    int q; cin>>q;
    while(q--){
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1==r2) cout<<r1<<" "<<r2<<endl;
        else
        cout<<l1<<" "<<r2<<endl;
        // if(l1==l2 && r1==r2) cout<<l1<<" "<<r1<<endl;
        // else if(l2<r1) cout<<l2<<" "<<r2<<endl;
        // else if(l2==r1) cout<<l1<<" "<<r2<<endl;
        // else if(l1<r2) cout<<l1<<" "<<r2<<endl;
        // else if(r2==l1) cout<<r1<<" "<<r2<<endl;
        // else cout<<l1<<" "<<r2<<endl;
    }


    return 0;
}
// (1≤l1i,r1i,l2i,r2i≤109,l1i<r1i,l2i<r2i)