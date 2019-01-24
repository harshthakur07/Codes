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

vector<int> solution(vector<int>&A){
    int n = A.size();
    // vector<int>cumulativeSum;
    vector<int>ans;
    //  int f=0,e=0; int sum = 0; cumulativeSum.push_back(0);
    // for(i=0;i<n;i++) {sum += A[i]; cumulativeSum.push_back(sum);}

    // map<int,int>m;
    // i=0; int j = cumulativeSum.size()-1; int al = -1;
    // rep(i,n+1) cout<<cumulativeSum[i]<<" ";
    // cout<<endl;
    // // while(j-i>al){
    // //     for(int k = j;k > i; k--){
    // //         if(cumulativeSum[i]==cumulativeSum[k]){
    // //             if(k-i > al){
    // //                 al = k-i;
    // //                 f = i;
    // //                 e = k;
                    
    // //             }
    // //             break;
    // //         }
    // //     }
    // //     i++;
    // // }
    // // for(i=f;i<e;i++) ans.push_back(A[i]);
    // i=0;
    // while(i<n+1){
    //     // if(!m[cumulativeSum[i]]){
    //         m[cumulativeSum[i]]=i;
           
    //     // }
    //     i++;
    // }

    unordered_map<int, int> presum;
    int f = 0 ,e=0;
    int sum = 0;     // Initialize the sum of elements
    int max_len = 0; // Initialize result
    int i;
    // Traverse through the given array
    for (i = 0; i < n; i++) //[1,2,-2,4,-4] [ 1, 2, -3, 3 ]
    {
        // Add current element to sum
        sum += A[i];

        if (A[i] == 0 && max_len == 0)
            max_len = 1;
        if (sum == 0){
            max_len = i + 1;
            f = -1;
            e = i;
        }
            

        // Look for this sum in Hash table
        if (presum.find(sum) != presum.end())
        {
            // If this sum is seen before, then update max_len
            // cout<<max_len<<" "<<i <<" -"<<presum[sum];
            if (max_len < i - presum[sum])
            {
                // cout << "Hello";
                e = i;
                f = presum[sum];
                max_len = i - presum[sum];
            };
            // cout << f << " " << e << endl;
        }
        else
        {
            // Else insert this sum with index in hash table
            presum[sum] = i;
        }
    }

    for (i = f+1; i <= e; i++)
        ans.push_back(A[i]);
    return ans;

    // for(i=0;i<n+1;i++){
    //     // if(m[cumulativeSum[i]]!=0)
    //     cout << m[cumulativeSum[i]] << endl;
    // }
    // return ans;
}

int main()
{
    bhaukaal;
    int i, N; cin>>N;
    vector<int>v(N);
    rep(i,N) cin>>v[i];

 vector<int>ans = solution(v);
    rep(i,ans.size()) cout<<ans[i]<<" ";
    return 0;
}
