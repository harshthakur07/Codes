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
	int t; cin>>t;
   	while(t--){
		int n,x;cin>>n; int favour = 0,notInfavour = 0;
		while(n--){
		cin>>x; if(x==1)favour++; else if(x==-1) notInfavour++;
		}
	if(favour>=notInfavour) cout<<"YES\n";else cout<<"NO\n";	
	}

 return 0;
}
