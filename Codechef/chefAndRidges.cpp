#include<bits/stdc++.h>
using namespace std;

long long generatePower(int n){

	long long ans = 1;
	for(int i=1;i<=n;i++) ans = ans*2;
	return ans;

}


int main(){
	long long pre[27] = {0};
	pre[1] = 1; pre[2] = 1;
	for(int i=3;i<=26;i++){
		pre[i] = 2*pre[i-2] + pre[i-1];	
	}
	int qq; cin>>qq;
	while(qq--){ 
		
		int n; cin>>n; 		
		int x = pre[n]; long long y = generatePower(n);
		cout<<x<<" "<<y;
		if(qq!=0)cout<<" ";
	}
	
	return 0;
}
