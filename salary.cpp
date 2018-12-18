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
	
	int x,n,i; cin>>x>>n;
	long long salary = 0;
	for(i=x;i<n;){salary += i;i+=x;}
	cout<<salary<<endl;
	}	
   

 return 0;
}
