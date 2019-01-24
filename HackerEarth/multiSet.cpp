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
    int i,N; cin>>N;
    vector<unsigned long long>A(N);
    vector<unsigned long long> B(N);
    rep(i,N) cin>>A[i];
    rep(i, N) cin >> B[i];
    sort(A.begin(),A.end());
    sort(B.begin(), B.end());
    unsigned long long ans =0;
    rep(i,N) {
        if(B[i]>A[i]) ans += B[i] - A[i];
        else ans += A[i] - B[i];
    }
    cout<<ans;

    return 0;
}
