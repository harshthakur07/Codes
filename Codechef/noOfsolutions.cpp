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

int main()
{
    bhaukaal;
    int t;  
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        if((a1==0 && b1!=0) || (a1!=0 && b1==0) || (a2==0 && b2!=0) || (a2!=0&&b2==0)) {cout<<1<<endl; continue;}
        
        float x = (float)a1/(float)a2;
        float y = (float)b1/(float)b2;
        float a = (float)a3/(float)a2;
        float b = (float)b3/(float)b2;

        if(x!=y) cout<<1<<endl;
        else if(x==y && a==b) cout<<-1<<endl;
        else if(x==y && a!=b) cout<<0<<endl;
        
    }
    return 0;
}
