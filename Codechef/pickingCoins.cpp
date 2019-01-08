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
	int T;cin>>T;
	int64_t N,k;
	
	while(T--){
		cin>>N>>k;
		int64_t p = k;
		int ans = 0;
		bool flag = true;
		while(flag){
			if(N>=p){ N -= p; ans = 0;}
			if(N>=p){ N -= p; ans = 1;}
			if(N<p) break;
			p = p*k;	
		}
		if(ans==0) cout<<"Alice\n";else cout<<"Bob\n";
	}
 return 0;
}
