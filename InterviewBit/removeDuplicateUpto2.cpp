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

int removeDuplicate(vector<int>&A){
    if(A.size()==0) return A.size();

    int k=0,c=0;
    for(int i=0;i<A.size();i++){
      
      if(A[i]==A[k] && c!=2){
          k++; c++;
          cout<<" sdf"<<k<<endl;
      }else if(A[i]!=A[k]){
          cout<<"hello"<<i<<endl;
          A[k++] = A[i]; c++;
      }else c=0;
    }
    int i;
    rep(i,A.size()) cout<<A[i]<<endl;
    return 0;
} 


int main()
{
    bhaukaal;
    int i,N; cin>>N;
    vecti v(N); 
    rep(i,N) cin>>v[i];
    // rep(i,N) cout<<v[i]<<" ";
    int ans = removeDuplicate(v);
    return 0;
}
