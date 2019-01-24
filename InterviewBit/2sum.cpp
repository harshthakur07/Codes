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
vector<int> solution(vector<int> &A,int target){
    int i, N = A.size();
    vector<int>ans;
    map<int,int>m;
    for(i=0;i<N;i++){
        int compliment = target - A[i];
        if(m[compliment]){
            // cout<<m[compliment];
            ans.push_back(m[compliment]);
            ans.push_back(i+1);
             return ans;
        }
        m[A[i]] = i+1;
    }
    return ans;
}

int main()
{
    bhaukaal;
    int i,n,target; cin>>n>>target;
    vecti A(n);
    rep(i,n) cin>>A[i];
    vecti ans = solution(A,target);
    cout<<ans[0]<<ans[1];
    return 0;
}
