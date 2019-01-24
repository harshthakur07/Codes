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
#define bhaukaal  ios_base::sync_with_stdio(false);cin.tie(NULL)

// int solution(vector<int>&gas,vector<int>&cost){
int solution(int gas[], int cost[],int n){

        int ans = -1;
        int i;
        for (i = 0; i < n; i++)
        {
            if (cost[i] <= gas[i])
            {
                cout<<i<<endl;
                int j = 0;
                int fule = gas[i] - cost[i];
                bool isPossible = true;
                for (j = i + 1; j < n; j++)
                {
                    fule += gas[j];
                    if (fule < cost[j])
                    {
                        isPossible = false;
                        break;
                    }
                    fule -= cost[j];
                }
                if (isPossible)
                for (j = 0; j < i; j++)
                {
                    fule += gas[j];
                    if (fule < cost[j])
                    {
                        isPossible = false;
                        break;
                    }
                    fule -= cost[j];
                }
                if (isPossible){
                    ans = i;break;
                }
        }
    }
    return ans;
}
int main()
{
    bhaukaal;
    // int i,n; cin>>n;
    // vector<int>gas(n);vector<int>cost(n);
    int gas[] = {684, 57, 602, 987};
    int cost[] = {909, 535, 190, 976};
    // rep(i,n) cin>>gas[i];
    // rep(i,n) cin>>cost[i];
    int n = sizeof(gas) / sizeof(gas[0]);
    int index = solution(gas, cost,n);
    cout<<index;
    return 0;
}
