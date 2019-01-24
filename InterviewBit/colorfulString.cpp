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

int solution(int N){
    map<long, int> m;
    vector<int> v;
    while (N > 0)
    {
        int t = N % 10;
        v.push_back(t);
        m[t]++;
        N = N / 10;
    }
    bool ans = true;
    for(int i=v.size()-1;i>=1;i--){
        int temp = v[i];
        for(int j = i-1;j>=0;j--){
            temp = temp*v[j];
            if(m[temp]>0){
                return false;
            }
        }
    }
    return ans;
}
int main()
{
    bhaukaal;
    int N; cin>>N;
    cout<<solution(N);
    return 0;
}
