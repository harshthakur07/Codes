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
	int n; cin>>n;
	string hashTable[n+1];
	int x,i; string name;
	for(i=1;i<=n;i++){cin>>x>>name;hashTable[x]=name;}
	int q; cin>>q; int roll;
	while(q--){ cin>>roll; cout<<hashTable[roll]<<endl;}
 return 0;
}
