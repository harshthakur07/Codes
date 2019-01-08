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
bool prime[50007]; 
void SieveOfEratosthenes(int n) 
{ 
    
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
} 

int main(){ 
	fast
	int T; cin>>T;
	while(T--){
	  int i,n; cin>>n;
	  int x,c=0;
	  rep(i,n){
		cin>>x;
		if(!prime[x]) c++;	
	  }
	 	
	}
   

 return 0;
}
