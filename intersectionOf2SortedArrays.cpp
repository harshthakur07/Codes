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
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> merge(vector<int>&a,vector<int>&b){
    vector<int>ans;
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]==b[j]){
            ans.pb(a[i]);
            i++;j++;
        }else if(a[i]<b[j]) i++; else j++;
    }
    return ans;
}

int main(){ 

   int n,m;cin>>n>>m;
   vector<int>a; vector<int>b;
   int i,x;
   rep(i,n){
       cin>>x;a.pb(x);
   }
   rep(i,m){
       cin>>x;b.pb(x);
   }
   vector<int>ans=merge(a,b);
   rep(i,ans.size()) cout<<ans[i]<<" ";

 return 0;
}
