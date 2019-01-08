#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int>v;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		int ans = 0;
		if(v[0]>k){
			if(v[0]%k==0)
			 ans = v[0]/k -1;
			 else ans = v[0]/k;	
		}
		for(int i=0;i<n-1;i++){
				if((v[i+1] - v[i])>k){
					if((v[i+1] - v[i])%k==0)
					ans += (v[i+1] - v[i])/k - 1;
					else ans += (v[i+1] - v[i])/k;
				}
			}
			cout<<ans<<endl;
	}
	return 0;
}
