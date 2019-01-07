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
#define bhaukaal ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){ 
	bhaukaal;
	int i,n,x; cin>>n;
    int f[1001] = {0};
    int max = -1;
    rep(i,n){
        cin>>x; f[x]++;
        if(f[x]>max) max = f[x];
    }
    cout<<n-max;

 return 0;
}
