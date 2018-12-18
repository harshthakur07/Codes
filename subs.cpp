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
	int t;cin>>t;
	while(t--){
	 string s; cin>>s; int l = s.size();
	 int f[26]={0}; int i,j;
	 for(i=0;i<l;i++) f[s[i]-'a']++;
	 int isOdd = 0;
         //for(i=0;i<26;i++) cout<<f[i]<<" ";
         for(i=0;i<26;i++){
		if(f[i]%2!=0) isOdd++;
	  }
	 if(isOdd>=2 ||(l%2==0 && isOdd>0)) cout<<"NO\n";
	 else if(l%2==0 && isOdd==0) cout<<"YES\n";
	 else if(l%2!=0 && isOdd>1) cout<<"NO\n";
	 else if(l%2!=0 && isOdd == 1) cout<<"YES\n";
	}
   

 return 0;
}
