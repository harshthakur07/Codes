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

int solution(vecti v){
    sort(v.begin(), v.end());
    int n = v.size();
    int t1 = v[n - 1] * v[n - 2] * v[n - 3];
    int t2 = v[0] * v[1] * v[n - 1];
    return t1 > t2 ? t1 : t2;
    ;
}
int main()
{
    bhaukaal;
    int i, n;cin>>n;
    vecti v(n);
    rep(i,n) cin>>v[i];
    cout<<solution(v);
    return 0;
}
