#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,n;
	cin>>n;
	vector<long long>v;
	long long x; 
	for(i=0;i<n;i++){
		cin>>x;
		v.push_back(x);	
	}
	long ans = 0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++) {
			if(i+j==(v[i]+v[j])) ans++;
		}	
	}
	cout<<ans;
	return 0;
}
