//harsh thakur solution

#include <bits/stdc++.h>
using namespace std;

#define f(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) f(i, 0, n)
#define mp(a, b) make_pair(a, b)
#define ll long long
#define pi pair<int, int>
#define vecti vector<int>
#define vpi vector<pair<int, int>>
#define pb(a) push_back(a)
#define bhaukaal                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)


//[1 2 3 4 5 6 7 8 9 10]
int main()
{
    bhaukaal;
    int tc;
    cin >> tc;
    long i,j, N, sum;
    while (tc--)
    {
        cin >> N >> sum;
        ll x, cSum = 0;
        vector<ll> v;
        v.pb(0);
        rep(i, N)
        {
            cin >> x;
            v.pb(x);
        }

        int currentSum = v[1],start=1,i; 
        bool isFound = false;
        int y=0; int k = 0;
        for(i=2;i<=N;i++){
          
            while(currentSum>sum && start<i-1){
                currentSum -= v[start];
                start++;
            }
            if(currentSum==sum){
                isFound = true;
                x=start;
                y=i-1;
                break;
            }
    
            if(i<N) currentSum += v[i];
        }
        if(isFound){
            cout<<x<<" "<<y<<endl;
        }else cout<<-1<<"\n";
       
    }

    return 0;
}
