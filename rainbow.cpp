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
	int t,N; cin>>t;
	while(t--){
		cin>>N;
		// deque<int>q; 
		int i,x;
		vector<int>q;
		rep(i,N){
			cin>>x;
			q.push_back(x);
		}
		// deque<int>:: iterator f,r;
		int k = 1,j=N-1;
		i=0;  vector<pair<int, int> >vp;
		int now = q[0]; int f = 1;
		for(i=1;i<N;i++){
			if(q[i]==q[i-1]) f++;else{
				vp.push_back(make_pair(now,f));
				now = q[i]; f =1;
			}
		}
		if(f>0) vp.push_back(make_pair(now,f));
		int ans = true;
		if(vp.size()==13){
			for(i=0;i<13;i++){
				if(vp[i]!=vp[13-i-1]) ans = false;
				if(i<7 && vp[i].first!=i+1) ans = false;
			}
		}else{
			ans = false;
		}
		puts(ans?"yes":"no");
	}

   

 return 0;
}
