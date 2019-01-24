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
        vector<pair<ll,int> >a; vector<pair<ll,int>>b;
        int i; ll x;
        rep(i,n) {cin>>x; a.pb(mp(x,i));};
        rep(i,m) {cin>>x; b.pb(mp(x,i));};
        // map<ll,int>mapForSum;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int k=0;
        vector<pair<int,int> >ans; bool flag = false;
        i=0; int j=0;
        for(i=0;i<m;i++){
            cout<<a[0].second<<" "<<b[i].second<<endl;
        }
        for (i = 1; i < n; i++)
        {
            cout << a[i].second << " " << b[m-1].second << endl;
        }
        // while(ans.size()<n+m-1){
        //     ll sum = a[i] + b[j];
        //     if(mapForSum[sum]==0){
        //         mapForSum[sum]++;
        //         ans.pb(mp(i,j));
        //     }
        //     i++; j++;
        //     if(i==n) i=0; if(j==m) j=0;
        // }

        // for(i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         ll sum = a[i]+b[j];
        //         if(mapForSum[sum]==0){
        //             mapForSum[sum]++;
        //             if(k<n+m-1){
        //                 ans.pb(mp(i,j));
        //                 k++;
        //             }else{
        //                 flag = true; break;
        //             }
        //         }
        //     }
        //     if(flag) break;
        // }
        // rep(i,n+m-1) cout<<ans[i].first<<" "<<ans[i].second<<endl;
 return 0;
}
