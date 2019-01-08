//harsh thakur solution  

#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define mp(a,b) make_pair(a,b)
#define ll long long
#define pi pair<int,int>
#define vecti vector<int>
#define vpi vector<pair<int ,int> >
#define pb(a) push_back(a)
#define bhaukaal ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){ 
    bhaukaal;
    int t; cin>>t;
    ll n;
    while(t--){
        cin>>n;
        vector<unsigned ll>v(n);
        ll i,M;
        rep(i,n) cin>>v[i];
        cin>>M;
        sort(v.begin(),v.end());
        ll ans = v[M-1] - v[0];
        ll j = M;
        i = 1;
        while(j<n){
            if(ans>v[j] - v[i]) ans = v[j] - v[i];
            i++;j++;
        }
        cout<<ans<<endl;
    }

 return 0;
}
