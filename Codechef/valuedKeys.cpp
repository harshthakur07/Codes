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


int main(){ 
    fast
    string x,z; cin>>x>>z;
    int i; vector<char>v; int possible = true;
    int l = x.size();
    rep(i,l){
        if( z[i]>x[i] || z[i]=='z'){ possible = false; break;}
        else{
            if(x[i]==z[i]) v.pb('z');
            else if(x[i]>z[i]) v.pb(z[i]);
            // else if(z[i]>x[i]) { possible = false; break;}
        }
    }
    if(possible){
        rep(i,l) cout<<v[i];
    }else{
        cout<<-1;
    }

 return 0;
}
