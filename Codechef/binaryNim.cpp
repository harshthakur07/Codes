#include<bits/stdc++.h>
using namespace std;

int main(){
 
      int query;
      cin>>query;
      while(query--){
			int n;
			cin>>n;
			int freq[1000007] = {0};
			vector<int>v;
			int i,x;
			for(i=0;i<n;i++){
					cin>>x;
					v.push_back(x);
					freq[x]++;
			}
			int ans = 0;
			sort(v.begin(),v.end());
			for(i=0;i<n;){
				int a = v[i];
				int b = freq[v[i]];
				if(freq[a]>=b && freq[b]>=a) ans++;
				if(freq[a]>=a && freq[1]!=1) ans++;
				i += freq[a];
			}
			cout<<ans<<endl;
		}

	return 0;
}
