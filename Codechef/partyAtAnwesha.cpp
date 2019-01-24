//harsh thakur solution

#include <bits/stdc++.h>
using namespace std;

#define f(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) f(i, 0, n)
#define mp(a, b) make_pair(a, b)
#define pi pair<int, int>
#define vecti vector<int>
#define vpi vector<pair<int, int>>
#define pb(a) push_back(a)
#define bhaukaal                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
 int handShakes[100007];
 void pre(){
     handShakes[2]=1;
     handShakes[4] = 2;
     handShakes[6] = 3;
     for(int i=8;i<=100006;){
        //  cout<<i<<endl;
         handShakes[i] = handShakes[i-2] +  1;
         i++;i++;
     }
 }
int main()
{
    bhaukaal;
    int t ;cin>>t;
    pre();
    int n;
    while(t--){
        cin>>n;
        cout<<handShakes[n]<<endl;
    }

    return 0;
}
