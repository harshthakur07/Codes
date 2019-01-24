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

int solution(int n,int pos){
    cout<<pos<<endl;
    if(pos==n) return 1;
    if(pos>n) return 0;
    return solution(n,pos+1) + solution(n,pos+2);
}


int main()
{
    bhaukaal;

    int n; cin>>n;
    int ans = solution(n,0);
    cout<<ans;
    return 0;
}
