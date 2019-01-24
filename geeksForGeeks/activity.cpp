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
#define bhaukaal ios_base::sync_with_stdio(false); cin.tie(NULL)

bool cmp(const pair<int,int>&a,const pair<int,int>&b){
    return a.second<b.second;
}

int main()
{
    bhaukaal;
    int i,t,N; cin>>t;
    while(t--){
        cin>>N;
    vecti A(N); vecti B(N);
    vector<pair<int,int> >vp;
    rep(i,N) cin>>A[i];
    rep(i, N) cin >> B[i];
    rep(i,N) vp.pb(make_pair(A[i],B[i]));
    sort(vp.begin(),vp.end(),cmp);
    int ans = 1;
    int k = 0;
    for(i=1;i<N;i++){
        if(vp[k].second<=vp[i].first) {
            k=i; ans++;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
