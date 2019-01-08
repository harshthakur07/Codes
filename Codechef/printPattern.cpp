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

	int t; cin>>t;
	int n;
	while(t--){
		cin>>n;
		int prev = 1,k=1;
		int h=1,v=2;
		int i = 1;
		int level = 1;
		while(i<=n){
                    int j=1; int l = level; int dec = level-1;
		   while(j<=n){
			cout<<k;
			cout<<" ";
			
			if(j+level>n && level!=1){
			 
			 k += dec; dec--;		
			}else{
			k += l;dec=l;l++;
			}
			j++;
		  }
		   cout<<"\n";
		   k = h;
		   k += v;
		   h = k;
		   v++; i++;	level++;				
		}	
	}
   
	
 return 0;
}
