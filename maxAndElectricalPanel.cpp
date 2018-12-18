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
	int coins = 1000;
	int n,z,c; cin>>n>>c;
	bool isFound = false;
	bool isBroken = false;
	int zero = 1,one=n,i=0;
	while(isFound==false && coins>0){
		//cout<<"zero "<<zero<<" "<<"one "<<one<<"Coins "<<coins<<endl;
		if(!isBroken){
			int t = zero+(one-zero)/2;
			cout<<1<<" "<<t<<"\n"<<flush;
			coins--;
			cin>>z;
			if(z==1){
			  isBroken = true;
			  one = t;				
			}else if(z==0){
			  isBroken = false;
			  zero = t;
                         }	
		}else{
		 coins = coins - c;
		//i++;
		 cout<<2<<"\n"<<flush;
		 isBroken = false;
		}
	if(one-zero==1 || one-zero==0){
	 isFound = true;
	 }	
	}
	//cout<<i<<endl<<flush;
	if(isBroken && coins>=c) cout<<2<<"\n"<<flush;
	cout<<3<<" "<<one<<"\n"<<flush;	
 return 0;
}
