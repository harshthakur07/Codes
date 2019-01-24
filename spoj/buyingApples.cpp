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
    long long dp [107][107];
    void init(){
        for(int i=0;i<105;i++) 
         for(int j=0;j<105;j++) dp[i][j] = 100000009;
    }

long long int minimumPrice(int packets ,int kgs,int pos,vecti v,int n,bool isInitialized){
    // if(!isInitialized){
    //     isInitialized = true;
    //     init();
    //     dp[packets][kgs] = v[pos];
    // }
    if(packets>n || kgs>v.size()) return INT_MAX;
    if(packets<=n && kgs==v.size()) return 0;
    // if (dp[packets][kgs] != 100000009)
    //     return dp[packets][kgs];
    if(v[pos]!=-1){
        return min(minimumPrice(packets + 1, kgs + pos + 1, pos, v, n,isInitialized) + v[pos], 
        minimumPrice(packets + 1, kgs + pos + 1, pos+1, v, n,isInitialized) + v[pos+1]);
        // dp[packets][kgs] = min(minimumPrice(packets + 1, kgs + pos + 1, pos, v, n,isInitialized) + v[pos],
        //  minimumPrice(packets + 1, kgs + pos + 1, pos + 1, v, n, isInitialized) + v[pos + 1]);
    }
    else{
        dp[packets][kgs] = minimumPrice(packets,kgs,pos+1,v,n,isInitialized);
        return minimumPrice(packets, kgs, pos + 1, v, n, isInitialized);
    }
    // return dp[packets][kgs];
}


int main()
{
    bhaukaal;
    int t; cin>>t;
    while(t--){
        int i,n,k; cin>>n>>k;
        vecti v(k);
        rep(i,k) cin>>v[i];
        long long int index= minimumPrice(0, 0, 0, v, n,false);
        if(index>=INT_MAX)
        {
            cout<<-1<<endl;
        }else cout<<index<<endl;
    }

    return 0;
}
