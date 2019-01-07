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
	int T; cin>>T;
	char arr[3][3];
	while(T--){
		int i,j;
		for(i=0;i<3;i++){
		 for(j=0;j<3;j++) cin>>arr[i][j];
		}
		bool isFound = false;
		for(i=0;i<2;i++)
		 for(j=0;j<2;j++){ 
			if(arr[i][j]=='l'){
				if(arr[i+1][j]=='l' && arr[i+1][j+1]=='l'){
					isFound = true; 				break;					
				}
			}
		 if(isFound) break;	
		}
		if(isFound) cout<<"yes\n";else cout<<"no\n";	
	}

 return 0;
}
