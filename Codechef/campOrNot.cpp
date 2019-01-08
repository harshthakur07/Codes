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
	int T,D; cin>>T;
	while(T--){
		int D,i, x,y,Q,dead,req;
		vector<pair<int ,int> >v;
		cin>>D;
		rep(i,D){
			cin>>x>>y;
			v.pb(make_pair(x,y));		
		}
		sort(v.begin(),v.end());
		int day[32]={0};
		for(i=1;i<v[0].first;i++) day[i]=0;
		
		int sum = 0;
		for(i=0;i<D-1;i++){
			sum += v[i].second;
		 for(int j=v[i].first;j<v[i+1].first;j++){
			day[j] = sum;	
		 }		
		}
		sum += v[i].second;
		i=v[i].first;
   		for(;i<32;i++) day[i] = sum;
		cin>>Q;
		while(Q--){
			cin>>dead>>req;
			if(day[dead]>=req) cout<<"Go Camp\n";
			else cout<<"Go Sleep\n";		
		}
		
		
	}
			

 return 0;
}
