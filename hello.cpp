#include<bits/stdc++.h>
using namespace std;
int n,q,i;

#define mod 1000000007

void update(vector<long long>&v,int n,long long id,long long val){
		if(val==0) return ;
		v[id] = (v[id]%mod  + val%mod)%mod;
		if(id == n) update(v,n,1,val-1);
		else update(v,n,id+1,val-1);

}
long long query(vector<long long>&v,int n,long long l,long long r){
	if(l==r) return v[l]%mod;
	if(l==n) return v[l]%mod + query(v,n,1,r);
	else return v[l]%mod + query(v,n,l+1,r);
}

int main(){
	cin>>n>>q;
	vector<long long>v(n+1);
	for(i=1;i<=n;i++){
		cin>>v[i];
	}
	while(q--){
		long long int l,r,x;
		cin>>x>>l>>r;
		if(x==1){
			update(v,n,l,r);
		}else{
			cout<<query(v,n,l,r)<<endl;
		}
	}

	return 0;
}

