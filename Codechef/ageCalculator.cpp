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
		vector<int>days(n);
		int i,yc,mc,dc,yb,mb,db; long totalDays = 0;
	 	rep(i,n){ cin>>days[i]; totalDays += days[i];}
		cin>>yb>>mb>>db>>yc>>mc>>dc;
		int noOfYears = 0; long ans = 0;
		if(yc==yb){
				if(mc==mb){ ans += dc-db+1;}
				else{
					ans += days[mb-1] - db + 1;
					for(i=mb;i<mc-1;i++) ans += days[i];
					ans += dc;					
				}						
		}else{
			noOfYears = yc-yb;
			if(noOfYears>1){
				int leap = (4-yb%4)%4;
				ans += days[mb-1] - db + 1;
				for(i=mb;i<n;i++) ans += days[i];
				for(i=0;i<mc-1;i++) ans += days[i];
				ans += dc;
				//if(yb%4==0) ans++;
				noOfYears--; int leapYears = 0;
				int nextLeap = yb+leap;
				int x = nextLeap/4; int y = yc/4; 
				if(yc%4!=0) leapYears = y-x+1; else leapYears = y-x;
				ans += noOfYears*totalDays+leapYears;
				 		
			}else{
			  	ans += days[mb-1] - db + 1;
				for(i=mb;i<n;i++) ans += days[i];
				for(i=0;i<mc-1;i++) ans += days[i];
				ans += dc;
				if(yb%4==0) ans++;			
			}		
		}
	  cout<<ans<<endl;		 
	}
   
	
 return 0;
}
