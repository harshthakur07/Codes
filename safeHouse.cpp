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
#define bhaukaal ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){ 
	bhaukaal;
	int t,x,y,M; cin>>t;
	while(t--){
        cin>>M>>x>>y;
        int houses[101]={0};
        int t,i,j,room,rooms = 0; int roomsCovered = x*y;
        while(M--){
            cin>>room;
            i = room - roomsCovered; j = room + roomsCovered;
            if(i<0) i = 1; if(j>100) j = 100;
            for(;i<=room;i++) houses[i] = 1; for(i=room;i<=j;i++) houses[i]=1;
        }
        for(i=1;i<=100;i++) if(houses[i]==0) rooms++;
      cout<<rooms<<endl;
	}
 return 0;
}
