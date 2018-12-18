#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int t; cin>>t;
	int rt,rd,st,sd;
	while(t--){
		cin>>rt;
		int ramTasks[101]={0}; 
		int ramDare[101] = {0};
		int i,x;
		for(i=0;i<rt;i++){ cin>>x; ramTasks[x]++;}
		cin>>rd;
		for(i=0;i<rd;i++){ cin>>x; ramDare[x]++;}
		int failed = 0;
		cin>>st;
		for(i=0;i<st;i++){
			 cin>>x;
			 if(failed==0 && ramTasks[x]==0) failed=1;
			}
		cin>>sd;
		for(i=0;i<sd;i++){
			 cin>>x;
			 if(failed==0 && ramDare[x]==0) failed=1;
			}
		if(failed==1) cout<<"no\n"; else cout<<"yes\n";
	}
	return 0;
}
