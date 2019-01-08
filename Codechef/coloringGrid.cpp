#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int t;
  cin>>t;
  while(t--){
	 int n,m;
	 cin>>n>>m;
	 int grid[n][m];
	 int coloredGrid[n][m];
	 int i,j;
	 char ch;
	 for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>ch;
			if(ch=='.') {grid[i][j] = 0;coloredGrid[i][j]=0;}
			else {grid[i][j] = 1;coloredGrid[i][j]=1;}
		} 
      } 
      int possible = 0;
      for(i=0;i<n-1;i++){
		for(j=0;j<m-1;j++){
			if(grid[i][j]==0){
				if(grid[i][j+1]==0 && grid[i+1][j+1]==0 && grid[i+1][j]==0){
					coloredGrid[i][j]=2;
					coloredGrid[i][j+1]=2;
					coloredGrid[i+1][j]=2;
					coloredGrid[i+1][j+1]=2;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		 for(j=0;j<m;j++){ if(coloredGrid[i][j]==0){ possible =1; break;} }if(possible ==1 ) break;}
	if(possible==1) cout<<"NO\n";
	else cout<<"YES\n";
}
return 0;
}
