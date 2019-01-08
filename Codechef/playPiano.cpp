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
		string s; cin>>s;
		int days = s.size();
		bool isTampered = false;
		int a=0,b=0,i=0;
		while(i<days){
			if(s[i]=='A') a++;
			if(s[i]=='B') b++;
			if(s[i+1]=='A') a++;
			if(s[i+1]=='B') b++;
			if(a!=1 || b!=1){isTampered = true; 		
					break;}
			i += 2;	
			a=0;b=0;	
		}
		if(!isTampered) cout<<"yes\n"; else cout<<"no\n";
	 		
	}
   

 return 0;
}
