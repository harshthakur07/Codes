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

vector<long long>sp;
void SieveOfEratosthenes(long n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]){ 
          sp.pb(p*p);
	}
   
}
int binarySearch(int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (sp[mid] == x) 
            return mid;  
	if(sp[mid]>x && sp[mid-1]<x) return mid;
        if (sp[mid] > x) 
            return binarySearch(l, mid - 1, x); 
        return binarySearch(mid + 1, r, x); 
    } 
    return 0; 
} 


long findOperations(int x){
	int index = binarySearch(0,sp.size(),x);
	if(index==0) return sp[index]-x;
	else {
		long l = sp[index] - x;
		long r = x- sp[index-1];
		return l<r?l:r;	
	}
}


int main(){ 
	fast
	SieveOfEratosthenes(10000);
	//for(int i=0;i<sp.size();i++) cout<<sp[i]<<endl;
	int n,k; cin>>n>>k;
	vector<long>v;
	int i,x;
	for(i=0;i<n;i++){
		cin>>x;
		v.pb(findOperations(x));	
	}	
   	sort(v.begin(),v.end());
	long ans = 0;
	for(i=0;i<k;i++) ans += v[i];
	ans += n-k;
	cout<<ans;

 return 0;
}
