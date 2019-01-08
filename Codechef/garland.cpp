#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){ 
		string s; cin>>s;
		int len = s.size();
		int i;
		int flag = 0;
		int r=0,g=0,cr=0,cg=0;
		int f[2]={0};
		for(i=0;i<len-1;i++){	
			if(s[i]=='R') f[0]++; 
			else f[1]++;			
			if(s[i]=='R' && s[i+1]=='R'){ r++; cr++;}
			if(s[i]=='G' && s[i+1]=='G'){ g++; cg++;}
			if(r>2 || g>2 || cr>1 || cg>1){ flag =1; break;}
		} 
		
		if(s[len-1]=='R') f[0]++;
		 else f[1]++;
		if(flag ==1 || len%2!=0) cout<<"no\n";
    		else{
		  if(f[0]!=f[1]) cout<<"no\n"; else cout<<"yes\n";
		}

   	
	}
	return 0;
}
