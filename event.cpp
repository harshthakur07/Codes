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
	int t,l,r;cin>>t; string s,e;
	string weeks[7] = {"monday","tuesday","wednesday",
				"thursday","friday","saturday",
				"sunday"};
	while(t--){
		cin>>s>>e>>l>>r;	
		int i,si=0,ei=0,f=0;
		for(i=0;i<7;i++){ if(weeks[i]==s){si=i;f++;}if(weeks[i]==e){ei=i;f++;}}
		int d; 
		if(si>ei){ d = 7-si+ei+1;} else{ d = ei-si+1;}
		int ans =0;
		f=0;
		while(d<=r){
		 if(d>=l){ ans=d;f++;} if(f>1) break; d += 7;	
		}
		if(f==1) cout<<ans<<endl;
		else if(f>1) cout<<"many\n";
		else cout<<"impossible\n";	
	}
 return 0;
}
