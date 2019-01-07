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
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		vector<int>v(n);int i,x;
		for(i=0;i<n;i++) cin>>v[i];
		sort(v.begin(),v.end());
		int j=n-1;i =0;
		long ans=0;
		while(i<=j){
			ans += abs(v[i]-v[j]);
			i++;j--;
		}
		cout<<ans<<endl;	
	}
   

 return 0;
}
