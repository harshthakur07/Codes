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
        int t,N,bobLuckyNumber,aliceLuckyNumber; cin>>t;
        while(t--){
            cin>>N>>bobLuckyNumber>>aliceLuckyNumber;
            int i,x; int bob = 0,alice = 0,common=0;
            rep(i,N){
                cin>>x;
                if(x%bobLuckyNumber==0 && x%aliceLuckyNumber==0) common++;
                else if(x%bobLuckyNumber==0) bob++;
                else if(x%aliceLuckyNumber==0) alice++;
            }
            if(bobLuckyNumber==aliceLuckyNumber) cout<<"BOB\n";
            else{
                if(common>0){
                    if(bob-alice>=0) cout<<"BOB\n"; else cout<<"ALICE\n";
                }else if(bob-alice>0) cout<<"BOB\n"; else cout<<"ALICE\n";
            }
            // cout<<common<<" "<<bob<<" "<<alice<<endl;
            // int turn = 0;
            // if(common%2==1) turn = 1;
            // if(turn==0){
            //     if(bob==0) cout<<"ALICE\n";
            //     else{
            //         if(bob>alice) cout<<"BOB\n"; else cout<<"ALICE\n";
            //     } 
            // }else{
            //     if(alice==0) cout<<"BOB\n";
            //     else if(bob>alice+1) cout<<"BOB\n"; else cout<<"ALICE\n";
            // }
            // if(bob%2==0) cout<<"ALICE\n"; else cout<<"BOB\n";
            

        }

 return 0;
}
