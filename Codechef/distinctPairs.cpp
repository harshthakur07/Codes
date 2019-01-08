//harsh thakur solution  

#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define vecti vector<int>
#define vpi vector<pair<int ,int> >
#define pb(a) push_back(a)
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){ 
        fast
        int n,m; cin>>n>>m;
        vector<ll>a(n); vector<ll>b(m);
        int i;
        rep(i,n) cin>>a[i];
        rep(i,m) cin>>b[i];
        map<ll,int>mapForSum;
        int k=0;
        vector<pair<int,int> >ans; bool flag = false;
        for(i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ll sum = a[i]+b[j];
                if(mapForSum[sum]==0){
                    mapForSum[sum]++;
                    if(k<n+m-1){
                        ans.pb(mp(i,j));
                        k++;
                    }else{
                        flag = true; break;
                    }
                }
            }
            if(flag) break;
        }
        rep(i,n+m-1) cout<<ans[i].first<<" "<<ans[i].second<<endl;
 return 0;
}
