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
	int t; cin>>t;
    if(t==2 or t==3){
        cout<<1<<"\n"<<t<<"\n";
    }else{
        if(t%2==0){
            cout<<t/2<<endl;
            int i,r = t/2;
            rep(i,r){
                cout<<2<<" ";
            }
            cout<<endl;
        }else{
            int i, r = (t - 3)/2;
            cout<<r+1<<endl;
            rep(i,r){
                cout<<2<<" ";
            }
            cout<<3<<endl;
        }
    }
 return 0;
}
