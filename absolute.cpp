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
	long int t; cin>>t;
	int64_t a ,b;
	while(t--){
		cin>>a>>b;
		int64_t sum = a+b;
		vector<int>va;
		while(a>0 || b>0){
			int ta = a%10; int tb = b%10;
			int tr = (ta + tb)%10;
			va.pb(tr);
			a = a/10; b = b/10;
		}
		int i,l = va.size();
		int64_t eSum = 0,k=1;
		for(i=0;i<l;i++){
		 	eSum += va[i]*k;
			k = k*10;
		}
		//cout<<sum<<" "<<eSum<<endl;
		int64_t ans = sum - eSum;
		cout<<ans<<endl;
	}


   

 return 0;
}
