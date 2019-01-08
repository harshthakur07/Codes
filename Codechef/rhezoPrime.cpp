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

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1)  return false; 
  
    // Check from 2 to n-1 
    for (int i=2; i<n; i++) 
        if (n%i == 0) 
            return false; 
  
    return true; 
} 
int maxSum(int arr[], int n, int k) 
{ 
    // k must be greater 
    if (n < k) 
    { 
       cout << "Invalid"; 
       return -1; 
    } 
  
    // Compute sum of first window of size k 
    int res = 0; 
    for (int i=0; i<k; i++) 
       res += arr[i]; 
  
    // Compute sums of remaining windows by 
    // removing first element of previous 
    // window and adding last element of  
    // current window. 
    int curr_sum = res; 
    for (int i=k; i<n; i++) 
    { 
       curr_sum += arr[i] - arr[i-k]; 
       res = max(res, curr_sum); 
    } 
  
    return res; 
} 
int main(){ 
	fast
	int n,i; cin>>n;
	int v[n];
	int reqPrime;
	long long sum =0;
	for(i=n;i>=2;i--){ if(isPrime(i)){ reqPrime = i; break;}}
	cout<<reqPrime<<"Prime";
	for(i=0;i<n;i++) {cin>>v[i]; sum += v[i];}
	
	
	cout<<"Sum ==" <<sum;
	//cout << maxSum(v, n, reqPrime);
	

 return 0;
}
