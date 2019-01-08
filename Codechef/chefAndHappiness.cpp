#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int query; cin>>query;
	int n;
	while(query--){
		cin>>n;
		int v[n+1] = {0};	
		int i,j;
		for(i=1;i<=n;i++) cin>>v[i];
		int yes = 0;
		for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(v[i]!=v[j] && v[v[i]]==v[v[j]]){ 
				yes=1; break;
			}		
		}
		if(yes==1) break;
		}
		if(yes==1) cout<<"Truly Happy\n";else cout<<"Poor Chef\n";
	}
	return 0;
}
