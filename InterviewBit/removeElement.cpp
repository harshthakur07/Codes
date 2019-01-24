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

int solution(vecti &A,int x){
    int l = A.size();
    int i=0,j=0;
    while(i<l && j<l){
        if(A[i]!=x){
            A[j++] = A[i];
        }i++;
    }
    // rep(i,l) cout<<A[i]<<" ";
    return j;
}

int main()
{
    bhaukaal;
    int N,target,i; cin>>N>>target;
    vecti v(N);
    rep(i,N) cin>>v[i];

    int ans = solution(v,target);
    cout<<ans;

    return 0;
}
