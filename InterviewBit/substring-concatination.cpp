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
void reset(map<string,int>&m,vector<string>vs){

    int i,l = vs.size();
    rep(i,l){
        // cout<<vs[i]<<" "<<m[vs[i]]<<endl;
        m[vs[i]] = 1;
    }
}
int main()
{
    bhaukaal;
    int i,l;
    string S,x; cin>>S>>l;
    map<string,int>m;
    vector<string>vs;
    vector<int>ans;
    int n;
    rep(i,l){
        cin>>x; n = x.size();
        vs.pb(x);
        m[x] = 1;
    }
    i=0; 
    while(i<=S.size()-n){
        string str = "";
        bool flag = true;
        int j = i;int k = i+n; int count = 0;
        while(flag && count<l){
            // cout<<j<<" "<<k<<endl;
             str="";
            for (;j < k; j++)
                str += S[j];
            if(m[str]==1){
                // cout<<str<<endl;
                m[str]=2;
                k += n;
                count++;
            }else{
                reset(m,vs);
                flag = false;
            }    
        }
        // cout<<i<<" "<<flag<<" "<<count<<endl;
        if(flag && count==l){ reset(m,vs);ans.pb(i); i = i+(n*l);}
        else i++;
    }
    rep(i,ans.size()) cout<<ans[i]<<endl;

    return 0;
}
